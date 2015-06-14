//
//  GameStateMachine.cpp
//  SDL Game Programming Book
//
//  Created by shaun mitchell on 09/02/2013.
//  Copyright (c) 2013 shaun mitchell. All rights reserved.
//

#include "GameStateMachine.h"
#include <iostream>

void GameStateMachine::Clean()
{
    if(!m_gameStates.empty())
    {
        m_gameStates.back()->onExit();

        delete m_gameStates.back();
        
        m_gameStates.clear();
    }
}

void GameStateMachine::Update()
{
    if(!m_gameStates.empty())
    {
		m_gameStates.back()->Update();
	}
}

void GameStateMachine::Render()
{
    if(!m_gameStates.empty())
    {
        m_gameStates.back()->Render();
    }
}

void GameStateMachine::PushState(GameState *pState)
{
    m_gameStates.push_back(pState);
    m_gameStates.back()->OnEnter();
}

void GameStateMachine::PopState()
{
    if(!m_gameStates.empty())
    {
        m_gameStates.back()->onExit();
        m_gameStates.pop_back();
    }
    
    m_gameStates.back()->Resume();
}

void GameStateMachine::ChangeState(GameState *pState)
{
    if(!m_gameStates.empty())
    {
        if(m_gameStates.back()->getStateID() == pState->getStateID())
        {
            return; // do nothing
        }

		m_gameStates.back()->onExit();
		m_gameStates.pop_back();
    }

	// initialise it
    pState->OnEnter();
    
    // push back our new state
    m_gameStates.push_back(pState);
}