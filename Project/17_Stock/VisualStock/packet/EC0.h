#ifndef _EC0_H_
#define _EC0_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// EUREX연계KP200지수옵션선물체결(EC0) ( attr,block )
#pragma pack( push, 1 )

#define NAME_EC0     "EC0"

// 입력                           
typedef struct _EC0_InBlock
{
    char    optcode             [   8];    char    _optcode             ;    // [string,    8] 단축코드                        StartPos 0, Length 8
} EC0_InBlock, *LPEC0_InBlock;
#define NAME_EC0_InBlock     "InBlock"

// 출력                           
typedef struct _EC0_OutBlock
{
    char    chetime             [   6];    char    _chetime             ;    // [string,    6] 체결시간(24시간)                StartPos 0, Length 6
    char    chetime1            [   6];    char    _chetime1            ;    // [string,    6] 체결시간(36시간)                StartPos 7, Length 6
    char    sign                [   1];    char    _sign                ;    // [string,    1] 정규장종가대비구분              StartPos 14, Length 1
    char    change              [   6];    char    _change              ;    // [float ,  6.2] 정규장종가대비                  StartPos 16, Length 6
    char    drate               [   6];    char    _drate               ;    // [float ,  6.2] 정규장종가기준등락율            StartPos 23, Length 6
    char    price               [   6];    char    _price               ;    // [float ,  6.2] 현재가                          StartPos 30, Length 6
    char    open                [   6];    char    _open                ;    // [float ,  6.2] 시가                            StartPos 37, Length 6
    char    high                [   6];    char    _high                ;    // [float ,  6.2] 고가                            StartPos 44, Length 6
    char    low                 [   6];    char    _low                 ;    // [float ,  6.2] 저가                            StartPos 51, Length 6
    char    cgubun              [   1];    char    _cgubun              ;    // [string,    1] 체결구분                        StartPos 58, Length 1
    char    cvolume             [   6];    char    _cvolume             ;    // [long  ,    6] 체결량                          StartPos 60, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] 누적거래량                      StartPos 67, Length 12
    char    value               [  12];    char    _value               ;    // [long  ,   12] 누적거래대금(미제공)            StartPos 80, Length 12
    char    mdvolume            [  12];    char    _mdvolume            ;    // [long  ,   12] 매도누적체결량                  StartPos 93, Length 12
    char    mdchecnt            [   8];    char    _mdchecnt            ;    // [long  ,    8] 매도누적체결건수(미제공)        StartPos 106, Length 8
    char    msvolume            [  12];    char    _msvolume            ;    // [long  ,   12] 매수누적체결량                  StartPos 115, Length 12
    char    mschecnt            [   8];    char    _mschecnt            ;    // [long  ,    8] 매수누적체결건수(미제공)        StartPos 128, Length 8
    char    cpower              [   9];    char    _cpower              ;    // [float ,  9.2] 체결강도                        StartPos 137, Length 9
    char    offerho1            [   6];    char    _offerho1            ;    // [float ,  6.2] 매도호가1                       StartPos 147, Length 6
    char    bidho1              [   6];    char    _bidho1              ;    // [float ,  6.2] 매수호가1                       StartPos 154, Length 6
    char    openyak             [   8];    char    _openyak             ;    // [long  ,    8] 미결제약정수량                  StartPos 161, Length 8
    char    k200jisu            [   6];    char    _k200jisu            ;    // [float ,  6.2] KOSPI200지수                    StartPos 170, Length 6
    char    eqva                [   7];    char    _eqva                ;    // [float ,  7.2] KOSPI등가                       StartPos 177, Length 7
    char    theoryprice         [   6];    char    _theoryprice         ;    // [float ,  6.2] 이론가                          StartPos 185, Length 6
    char    impv                [   6];    char    _impv                ;    // [float ,  6.2] 내재변동성                      StartPos 192, Length 6
    char    openyakcha          [   8];    char    _openyakcha          ;    // [long  ,    8] 미결제약정증감                  StartPos 199, Length 8
    char    timevalue           [   6];    char    _timevalue           ;    // [float ,  6.2] 시간가치                        StartPos 208, Length 6
    char    jgubun              [   2];    char    _jgubun              ;    // [string,    2] 장운영정보                      StartPos 215, Length 2
    char    jnilvolume          [  12];    char    _jnilvolume          ;    // [long  ,   12] 전일동시간대거래량              StartPos 218, Length 12
    char    optcode             [   8];    char    _optcode             ;    // [string,    8] 단축코드                        StartPos 231, Length 8
} EC0_OutBlock, *LPEC0_OutBlock;
#define NAME_EC0_OutBlock     "OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _EC0_H_
