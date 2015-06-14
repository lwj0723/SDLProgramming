#ifndef _OC0_H_
#define _OC0_H_

///////////////////////////////////////////////////////////////////////////////////////////////////
// �ɼ�ü��(OC0) ( attr,block )
#pragma pack( push, 1 )

#define NAME_OC0     "OC0"

// �Է�
typedef struct _OC0_InBlock
{
    char    optcode             [   8];                                      // [string,    8] �����ڵ�                       StartPos 0, Length 8
} OC0_InBlock, *LPOC0_InBlock;
#define NAME_OC0_InBlock     "InBlock"

// ���
typedef struct _OC0_OutBlock
{
    char    chetime             [   6];    char    _chetime             ;    // [string,    6] ü��ð�                       StartPos 0, Length 6
    char    sign                [   1];    char    _sign                ;    // [string,    1] ���ϴ�񱸺�                   StartPos 7, Length 1
    char    change              [   6];    char    _change              ;    // [float ,  6.2] ���ϴ��                       StartPos 9, Length 6
    char    drate               [   6];    char    _drate               ;    // [float ,  6.2] �����                         StartPos 16, Length 6
    char    price               [   6];    char    _price               ;    // [float ,  6.2] ���簡                         StartPos 23, Length 6
    char    open                [   6];    char    _open                ;    // [float ,  6.2] �ð�                           StartPos 30, Length 6
    char    high                [   6];    char    _high                ;    // [float ,  6.2] ����                           StartPos 37, Length 6
    char    low                 [   6];    char    _low                 ;    // [float ,  6.2] ����                           StartPos 44, Length 6
    char    cgubun              [   1];    char    _cgubun              ;    // [string,    1] ü�ᱸ��                       StartPos 51, Length 1
    char    cvolume             [   6];    char    _cvolume             ;    // [long  ,    6] ü�ᷮ                         StartPos 53, Length 6
    char    volume              [  12];    char    _volume              ;    // [long  ,   12] �����ŷ���                     StartPos 60, Length 12
    char    value               [  12];    char    _value               ;    // [long  ,   12] �����ŷ����                   StartPos 73, Length 12
    char    mdvolume            [  12];    char    _mdvolume            ;    // [long  ,   12] �ŵ�����ü�ᷮ                 StartPos 86, Length 12
    char    mdchecnt            [   8];    char    _mdchecnt            ;    // [long  ,    8] �ŵ�����ü��Ǽ�               StartPos 99, Length 8
    char    msvolume            [  12];    char    _msvolume            ;    // [long  ,   12] �ż�����ü�ᷮ                 StartPos 108, Length 12
    char    mschecnt            [   8];    char    _mschecnt            ;    // [long  ,    8] �ż�����ü��Ǽ�               StartPos 121, Length 8
    char    cpower              [   9];    char    _cpower              ;    // [float ,  9.2] ü�ᰭ��                       StartPos 130, Length 9
    char    offerho1            [   6];    char    _offerho1            ;    // [float ,  6.2] �ŵ�ȣ��1                      StartPos 140, Length 6
    char    bidho1              [   6];    char    _bidho1              ;    // [float ,  6.2] �ż�ȣ��1                      StartPos 147, Length 6
    char    openyak             [   8];    char    _openyak             ;    // [long  ,    8] �̰�����������                 StartPos 154, Length 8
    char    k200jisu            [   6];    char    _k200jisu            ;    // [float ,  6.2] KOSPI200����                   StartPos 163, Length 6
    char    eqva                [   7];    char    _eqva                ;    // [float ,  7.2] KOSPI�                      StartPos 170, Length 7
    char    theoryprice         [   6];    char    _theoryprice         ;    // [float ,  6.2] �̷а�                         StartPos 178, Length 6
    char    impv                [   6];    char    _impv                ;    // [float ,  6.2] ���纯����                     StartPos 185, Length 6
    char    openyakcha          [   8];    char    _openyakcha          ;    // [long  ,    8] �̰�����������                 StartPos 192, Length 8
    char    timevalue           [   6];    char    _timevalue           ;    // [float ,  6.2] �ð���ġ                       StartPos 201, Length 6
    char    jgubun              [   2];    char    _jgubun              ;    // [string,    2] ������                     StartPos 208, Length 2
    char    jnilvolume          [  12];    char    _jnilvolume          ;    // [long  ,   12] ���ϵ��ð���ŷ���             StartPos 211, Length 12
    char    optcode             [   8];    char    _optcode             ;    // [string,    8] �����ڵ�                       StartPos 224, Length 8
} OC0_OutBlock, *LPOC0_OutBlock;
#define NAME_OC0_OutBlock     "OutBlock"

#pragma pack( pop )
///////////////////////////////////////////////////////////////////////////////////////////////////

#endif // _OC0_H_