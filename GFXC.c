#include <GFXC.h>

const char Chars[] =
{
		0x00, 0x00, 0x00, 0x00, 0x00 // 20
		,0x00, 0x00, 0x5f, 0x00, 0x00 // 21 !
		,0x00, 0x07, 0x00, 0x07, 0x00 // 22 "
		,0x14, 0x7f, 0x14, 0x7f, 0x14 // 23 #
		,0x24, 0x2a, 0x7f, 0x2a, 0x12 // 24 $
		,0x23, 0x13, 0x08, 0x64, 0x62 // 25 %
		,0x36, 0x49, 0x55, 0x22, 0x50 // 26 &
		,0x00, 0x05, 0x03, 0x00, 0x00 // 27 '
		,0x00, 0x1c, 0x22, 0x41, 0x00 // 28 (
		,0x00, 0x41, 0x22, 0x1c, 0x00 // 29 )
		,0x14, 0x08, 0x3e, 0x08, 0x14 // 2a *
		,0x08, 0x08, 0x3e, 0x08, 0x08 // 2b +
		,0x00, 0x50, 0x30, 0x00, 0x00 // 2c ,
		,0x08, 0x08, 0x08, 0x08, 0x08 // 2d -
		,0x00, 0x60, 0x60, 0x00, 0x00 // 2e .
		,0x20, 0x10, 0x08, 0x04, 0x02 // 2f /
		,0x3e, 0x51, 0x49, 0x45, 0x3e // 30 0
		,0x00, 0x42, 0x7f, 0x40, 0x00 // 31 1
		,0x42, 0x61, 0x51, 0x49, 0x46 // 32 2
		,0x21, 0x41, 0x45, 0x4b, 0x31 // 33 3
		,0x18, 0x14, 0x12, 0x7f, 0x10 // 34 4
		,0x27, 0x45, 0x45, 0x45, 0x39 // 35 5
		,0x3c, 0x4a, 0x49, 0x49, 0x30 // 36 6
		,0x01, 0x71, 0x09, 0x05, 0x03 // 37 7
		,0x36, 0x49, 0x49, 0x49, 0x36 // 38 8
		,0x06, 0x49, 0x49, 0x29, 0x1e // 39 9
		,0x00, 0x36, 0x36, 0x00, 0x00 // 3a :
		,0x00, 0x56, 0x36, 0x00, 0x00 // 3b ;
		,0x08, 0x14, 0x22, 0x41, 0x00 // 3c <
		,0x14, 0x14, 0x14, 0x14, 0x14 // 3d =
		,0x00, 0x41, 0x22, 0x14, 0x08 // 3e >
		,0x02, 0x01, 0x51, 0x09, 0x06 // 3f ?
		,0x32, 0x49, 0x79, 0x41, 0x3e // 40 @
		,0x7e, 0x11, 0x11, 0x11, 0x7e // 41 A
		,0x7f, 0x49, 0x49, 0x49, 0x36 // 42 B
		,0x3e, 0x41, 0x41, 0x41, 0x22 // 43 C
		,0x7f, 0x41, 0x41, 0x22, 0x1c // 44 D
		,0x7f, 0x49, 0x49, 0x49, 0x41 // 45 E
		,0x7f, 0x09, 0x09, 0x09, 0x01 // 46 F
		,0x3e, 0x41, 0x49, 0x49, 0x7a // 47 G
		,0x7f, 0x08, 0x08, 0x08, 0x7f // 48 H
		,0x00, 0x41, 0x7f, 0x41, 0x00 // 49 I
		,0x20, 0x40, 0x41, 0x3f, 0x01 // 4a J
		,0x7f, 0x08, 0x14, 0x22, 0x41 // 4b K
		,0x7f, 0x40, 0x40, 0x40, 0x40 // 4c L
		,0x7f, 0x02, 0x0c, 0x02, 0x7f // 4d M
		,0x7f, 0x04, 0x08, 0x10, 0x7f // 4e N
		,0x3e, 0x41, 0x41, 0x41, 0x3e // 4f O
		,0x7f, 0x09, 0x09, 0x09, 0x06 // 50 P
		,0x3e, 0x41, 0x51, 0x21, 0x5e // 51 Q
		,0x7f, 0x09, 0x19, 0x29, 0x46 // 52 R
		,0x46, 0x49, 0x49, 0x49, 0x31 // 53 S
		,0x01, 0x01, 0x7f, 0x01, 0x01 // 54 T
		,0x3f, 0x40, 0x40, 0x40, 0x3f // 55 U
		,0x1f, 0x20, 0x40, 0x20, 0x1f // 56 V
		,0x3f, 0x40, 0x38, 0x40, 0x3f // 57 W
		,0x63, 0x14, 0x08, 0x14, 0x63 // 58 X
		,0x07, 0x08, 0x70, 0x08, 0x07 // 59 Y
		,0x61, 0x51, 0x49, 0x45, 0x43 // 5a Z
		,0x00, 0x7f, 0x41, 0x41, 0x00 // 5b [
		,0x02, 0x04, 0x08, 0x10, 0x20 // 5c
		,0x00, 0x41, 0x41, 0x7f, 0x00 // 5d ]
		,0x04, 0x02, 0x01, 0x02, 0x04 // 5e ^
		,0x40, 0x40, 0x40, 0x40, 0x40 // 5f _
		,0x00, 0x01, 0x02, 0x04, 0x00 // 60 `
		,0x20, 0x54, 0x54, 0x54, 0x78 // 61 a
		,0x7f, 0x48, 0x44, 0x44, 0x38 // 62 b
		,0x38, 0x44, 0x44, 0x44, 0x20 // 63 c
		,0x38, 0x44, 0x44, 0x48, 0x7f // 64 d
		,0x38, 0x54, 0x54, 0x54, 0x18 // 65 e
		,0x08, 0x7e, 0x09, 0x01, 0x02 // 66 f
		,0x0c, 0x52, 0x52, 0x52, 0x3e // 67 g
		,0x7f, 0x08, 0x04, 0x04, 0x78 // 68 h
		,0x00, 0x44, 0x7d, 0x40, 0x00 // 69 i
		,0x20, 0x40, 0x44, 0x3d, 0x00 // 6a j
		,0x7f, 0x10, 0x28, 0x44, 0x00 // 6b k
		,0x00, 0x41, 0x7f, 0x40, 0x00 // 6c l
		,0x7c, 0x04, 0x18, 0x04, 0x78 // 6d m
		,0x7c, 0x08, 0x04, 0x04, 0x78 // 6e n
		,0x38, 0x44, 0x44, 0x44, 0x38 // 6f o
		,0x7c, 0x14, 0x14, 0x14, 0x08 // 70 p
		,0x08, 0x14, 0x14, 0x18, 0x7c // 71 q
		,0x7c, 0x08, 0x04, 0x04, 0x08 // 72 r
		,0x48, 0x54, 0x54, 0x54, 0x20 // 73 s
		,0x04, 0x3f, 0x44, 0x40, 0x20 // 74 t
		,0x3c, 0x40, 0x40, 0x20, 0x7c // 75 u
		,0x1c, 0x20, 0x40, 0x20, 0x1c // 76 v
		,0x3c, 0x40, 0x30, 0x40, 0x3c // 77 w
		,0x44, 0x28, 0x10, 0x28, 0x44 // 78 x
		,0x0c, 0x50, 0x50, 0x50, 0x3c // 79 y
		,0x44, 0x64, 0x54, 0x4c, 0x44 // 7a z
		,0x00, 0x08, 0x36, 0x41, 0x00 // 7b {
		,0x00, 0x00, 0x7f, 0x00, 0x00 // 7c |
		,0x00, 0x41, 0x36, 0x08, 0x00 // 7d }
		,0x10, 0x08, 0x08, 0x10, 0x08 // 7e
		,0x78, 0x46, 0x41, 0x46, 0x78 // 7f
		,0xFF, 0x00, 0x00, 0x00, 0x00 // Current char line
};

const int16_t ST[] =
{
		0, 799, 1567, 2275, 2896, 3405,
		3783, 4016, 4095, 4016, 3783, 3405,
		2896, 2275, 1567, 799, 0, -799,
		-1567, -2275, -2896, -3405, -3783, -4016,
		-4095, -4016, -3783, -3405, -2896, -2275,
		-1567, -799, 0, 799
};

uint16_t GenerateColour(uint8_t RedA, uint8_t GreenA, uint8_t BlueA){
	uint16_t TCol = 0;
	RedA>>=3;
	GreenA>>=2;
	BlueA>>=3;

	TCol |= BlueA;
	TCol |= (GreenA<<5);
	TCol |= (RedA<<11);

	return TCol;
}

void TextParamInit(TextParamStruct* T){
	T->Size = 0;
	T->Font = StdFont;
	T->XPos = 0;
	T->Padding = 0;
	T->Precision = 0;
	T->YPos = 0;
	T->TxtCol = Black;
	T->BkgCol = White;
}

void ShapeParamInit(ShapeParamStruct* S){
	S->Fill = DISABLE;
	S->LineCol = Black;
	S->FillCol = White;
	S->Thickness = 0;
	S->XSPos = 0;
	S->YSPos = 0;
	S->XEPos = 0;
	S->YEPos = 0;
	S->Radius = 0;
	S->SemiUD = SemiU;
	S->Dashed = ENABLE;
}

int8_t PChar(uint16_t Ch, TextParamStruct *T){
	uint8_t X = T->XPos, Y = T->YPos, Size = T->Size;
	if(X>XPix-(Size+1)*5 || Y>YPix-(Size+1)*8 || Ch < 0x20) return -1;

	uint8_t XCnt, YCnt;

	Ch-=0x20;
	Ch*=5;

	switch(Size){
	case 0:
		SetAddr(X, Y, X+4+LetterSpace, Y+7);
		for(YCnt = 0; YCnt<8; YCnt++){
			for(XCnt = 0; XCnt<5+LetterSpace; XCnt++){
				//if(XCnt<5 && (Chars[Ch+XCnt] & (1<<YCnt))) PCol(T->TxtCol);
				//else PCol(T->BkgCol);
				if(XCnt<5 && (Chars[Ch+XCnt] & (1<<YCnt))) SW(T->TxtCol, Dat);
				else SW(T->BkgCol, Dat);
			}
		}
		break;
	case 1:
		SetAddr(X, Y, X+9+LetterSpace, Y+15);
		for(YCnt = 0; YCnt<16; YCnt++){
			for(XCnt = 0; XCnt<10+LetterSpace; XCnt++){
				//if(XCnt<10 && (Chars[Ch+(XCnt>>1)] & (1<<(YCnt>>1)))) PCol(T->TxtCol);
				//else PCol(T->BkgCol);
				if(XCnt<10 && (Chars[Ch+(XCnt>>1)] & (1<<(YCnt>>1)))) SW(T->TxtCol, Dat);
				else SW(T->BkgCol, Dat);
			}
		}
		break;
	case 2:
		SetAddr(X, Y, X+14+LetterSpace, Y+23);
		for(YCnt = 0; YCnt<24; YCnt++){
			for(XCnt = 0; XCnt<15+LetterSpace; XCnt++){
				//if(XCnt<15 && (Chars[Ch+((86*XCnt)>>8)] & (1<<((86*YCnt)>>8)))) PCol(T->TxtCol);
				//else PCol(T->BkgCol);
				if(XCnt<15 && (Chars[Ch+((86*XCnt)>>8)] & (1<<((86*YCnt)>>8)))) SW(T->TxtCol, Dat);
				else SW(T->BkgCol, Dat);
			}
		}
		break;
	}

	T->XPos = X+(1+Size)*5+LetterSpace;

	return 0;
}

int8_t PStr(const char* Str, TextParamStruct *T){
	uint8_t X = T->XPos, Y = T->YPos, Size = T->Size;
	uint8_t SCnt, StrL;

	StrL = strlen(Str);

	switch(Size){
	case 0:
		if(X>XPix - StrL*(5+LetterSpace) || Y>YPix-8) return -1;

		for(SCnt = 0; SCnt<StrL; SCnt++){
			PChar(Str[SCnt], T);
		}
		break;
	case 1:
		if(X>XPix - StrL*(10+LetterSpace) || Y>YPix-16) return -1;

		for(SCnt = 0; SCnt<StrL; SCnt++){
			PChar(Str[SCnt], T);
		}
		break;
	case 2:
		if(X>XPix - StrL*(15+LetterSpace) || Y>YPix-24) return -1;

		for(SCnt = 0; SCnt<StrL; SCnt++){
			PChar(Str[SCnt], T);
		}
	}

	return 0;
}

int8_t PNum(int32_t Num, TextParamStruct *T){
	char NBuf[10];
	uint8_t Cnt, Len = 0, Sign;
	uint8_t X = T->XPos, Y = T->YPos, Size = T->Size;
	int8_t Pad = T->Padding;

	for(Cnt = 0; Cnt<10; Cnt++) NBuf[Cnt] = 0;

	if(T->XPos<0) return -2;

	if(Num<0){
		Num = -Num;
		Sign = 1;
	}
	else if(Num>0){
		Sign = 0;
	}

	if(Num>9) Pad-=1;
	if(Num>99) Pad-=2;
	if(Num>999) Pad-=3;
	if(Num>9999) Pad-=4;
	if(Num>99999) Pad-=5;
	if(Num>999999) Pad-=6;
	if(Num>9999999) Pad-=7;

	if(Pad<0) Pad = 0;

	if(Num<10){
		NBuf[0] = Num + '0';
		Len = 1;
	}
	else if(Num<100){
		NBuf[0] = Num/10 + '0';
		NBuf[1] = Num % 10  + '0';
		Len = 2;
	}
	else if(Num<1000){
		NBuf[0] = Num/100 + '0';
		NBuf[1] = Num/10 % 10 + '0';
		NBuf[2] = Num % 10 + '0';
		Len = 3;
	}
	else if(Num<10000){
		NBuf[0] = Num/1000 + '0';
		NBuf[1] = Num/100 % 10 + '0';
		NBuf[2] = Num/10 % 10 + '0';
		NBuf[3] = Num % 10 + '0';
		Len = 4;
	}
	else if(Num<100000){
		NBuf[0] = Num/10000 + '0';
		NBuf[1] = Num/1000 % 10 + '0';
		NBuf[2] = Num/100 % 10 + '0';
		NBuf[3] = Num/10 % 10 + '0';
		NBuf[4] = Num % 10 + '0';
		Len = 5;
	}
	else if(Num<1000000){
		NBuf[0] = Num/100000 + '0';
		NBuf[1] = Num/10000 % 10 + '0';
		NBuf[2] = Num/1000 % 10 + '0';
		NBuf[3] = Num/100 % 10 + '0';
		NBuf[4] = Num/10 % 10 + '0';
		NBuf[5] = Num % 10 + '0';
		Len = 6;
	}
	else if(Num<10000000){
		NBuf[0] = Num/1000000 + '0';
		NBuf[1] = Num/100000 % 10 + '0';
		NBuf[2] = Num/10000 % 10 + '0';
		NBuf[3] = Num/1000 % 10 + '0';
		NBuf[4] = Num/100 % 10 + '0';
		NBuf[5] = Num/10 % 10 + '0';
		NBuf[6] = Num % 10 + '0';
		Len = 7;
	}
	else if(Num<100000000){
		NBuf[0] = Num/10000000 + '0';
		NBuf[1] = Num/1000000 % 10 + '0';
		NBuf[2] = Num/100000 % 10 + '0';
		NBuf[3] = Num/10000 % 10 + '0';
		NBuf[4] = Num/1000 % 10 + '0';
		NBuf[5] = Num/100 % 10 + '0';
		NBuf[6] = Num/10 % 10 + '0';
		NBuf[7] = Num % 10 + '0';
		Len = 8;
	}
	else if(Num<1000000000){
		NBuf[0] = Num/100000000 + '0';
		NBuf[1] = Num/10000000 % 10 + '0';
		NBuf[2] = Num/1000000 % 10 + '0';
		NBuf[3] = Num/100000 % 10 + '0';
		NBuf[4] = Num/10000 % 10 + '0';
		NBuf[5] = Num/1000 % 10 + '0';
		NBuf[6] = Num/100 % 10 + '0';
		NBuf[7] = Num/10 % 10 + '0';
		NBuf[8] = Num % 10 + '0';
		Len = 9;
	}

	switch(Size){
	case 0:
		if(X>XPix - Len*(5+LetterSpace) || Y>YPix-8) return -1;
		break;
	case 1:
		if(X>XPix - Len*(10+LetterSpace) || Y>YPix-16) return -1;
		break;
	case 2:
		if(X>XPix - Len*(15+LetterSpace) || Y>YPix-24) return -1;
		break;
	}

	if(Sign == 1){
		PChar('-', T);
	}
	if(Pad>0){
		for(Cnt = 0; Cnt<Pad; Cnt++){
			PChar('0', T);
		}
	}
	for(Cnt = 0; Cnt<Len; Cnt++){
		PChar(NBuf[Cnt], T);
	}

	return 0;
}

int8_t PNumF(float Num, TextParamStruct *T){
	int32_t IPart, FracI;
	float Frac;
	uint8_t Sign;

	if(Num<0){
		Sign = 1;
		Num = -Num;
	}
	else Sign = 0;

	IPart = Num;

	if(Sign) PNum(-IPart, T);
	else PNum(IPart, T);

	if(T->Precision>0){
		Frac = Num - IPart;
		switch(T->Precision){
		case 1:
			FracI = (int32_t)(Frac*10);
			break;
		case 2:
			FracI = (int32_t)(Frac*100);
			break;
		case 3:
			FracI = (int32_t)(Frac*1000);
			break;
		case 4:
			FracI = (int32_t)(Frac*10000);
			break;
		case 5:
			FracI = (int32_t)(Frac*100000);
			break;
		}

		PChar('.', T);
		PNum(FracI, T);
	}
	return 0;
}

int8_t Circle(ShapeParamStruct S){
	if((S.XSPos+S.Radius)>XPix || (S.YSPos+S.Radius)>YPix) return 1;

	int32_t X, Y, D, X2M1;
	int8_t TCnt;
	Y = S.Radius;
	D = -S.Radius;
	X2M1 = -1;

	if(S.Fill == ENABLE){
		S.Radius-=S.Thickness;
		for(Y=-S.Radius; Y<=S.Radius; Y++){
			for(X=-S.Radius; X<=S.Radius; X++){
				if(X*X+Y*Y <= S.Radius*S.Radius + ((S.Radius*205)>>8)){
					WritePix(S.XSPos+X, S.YSPos+Y, S.FillCol);
				}
			}
		}
	}

	if(S.Thickness>0){
		for(X = 0; X<S.Radius*0.7071f; X++){
			X2M1+=2;
			D+=X2M1;
			if(D>=0){
				Y--;
				D-= (Y<<1);
			}

			switch(S.Thickness){
			case 1:
				WritePix(S.XSPos+X, S.YSPos+Y, S.LineCol);
				WritePix(S.XSPos-X, S.YSPos+Y, S.LineCol);
				WritePix(S.XSPos+X, S.YSPos-Y, S.LineCol);
				WritePix(S.XSPos-X, S.YSPos-Y, S.LineCol);
				WritePix(S.XSPos+Y, S.YSPos+X, S.LineCol);
				WritePix(S.XSPos-Y, S.YSPos+X, S.LineCol);
				WritePix(S.XSPos+Y, S.YSPos-X, S.LineCol);
				WritePix(S.XSPos-Y, S.YSPos-X, S.LineCol);
				break;
			case 2:
				S.Radius+=1;
				for(TCnt = -1; TCnt<1; TCnt++){
					WritePix(S.XSPos+X+TCnt, S.YSPos+Y+TCnt, S.LineCol);
					WritePix(S.XSPos-X-TCnt, S.YSPos+Y+TCnt, S.LineCol);
					WritePix(S.XSPos+X+TCnt, S.YSPos-Y-TCnt, S.LineCol);
					WritePix(S.XSPos-X-TCnt, S.YSPos-Y-TCnt, S.LineCol);
					WritePix(S.XSPos+Y+TCnt, S.YSPos+X+TCnt, S.LineCol);
					WritePix(S.XSPos-Y-TCnt, S.YSPos+X+TCnt, S.LineCol);
					WritePix(S.XSPos+Y+TCnt, S.YSPos-X-TCnt, S.LineCol);
					WritePix(S.XSPos-Y-TCnt, S.YSPos-X-TCnt, S.LineCol);
				}
				break;
			case 3:
				for(TCnt = -1; TCnt<=1; TCnt++){
					WritePix(S.XSPos+X+TCnt, S.YSPos+Y+TCnt, S.LineCol);
					WritePix(S.XSPos-X-TCnt, S.YSPos+Y+TCnt, S.LineCol);
					WritePix(S.XSPos+X+TCnt, S.YSPos-Y-TCnt, S.LineCol);
					WritePix(S.XSPos-X-TCnt, S.YSPos-Y-TCnt, S.LineCol);
					WritePix(S.XSPos+Y+TCnt, S.YSPos+X+TCnt, S.LineCol);
					WritePix(S.XSPos-Y-TCnt, S.YSPos+X+TCnt, S.LineCol);
					WritePix(S.XSPos+Y+TCnt, S.YSPos-X-TCnt, S.LineCol);
					WritePix(S.XSPos-Y-TCnt, S.YSPos-X-TCnt, S.LineCol);
				}
				break;
			}
		}
	}

	return 0;
}


int8_t LineC(ShapeParamStruct S){
	ShapeParamStruct FS;
	int32_t XE = S.XEPos, XS = S.XSPos, YE = S.YEPos, YS = S.YSPos;

	if(Abs(XE-XS)+S.Thickness>XPix-1 || Abs(YE-YS)+S.Thickness>YPix-1 || YE>YPix-1 || XE>XPix-1) return -1;

	int32_t Cnt, TCnt, Distance;
	int32_t XErr = 0, YErr = 0, dX, dY;
	int32_t XInc, YInc, Tck;

	dX = XE-XS;
	dY = YE-YS;

	if(dX>0) XInc = 1;
	else if(dX==0) XInc = 0;
	else XInc = -1;

	if(dY>0) YInc = 1;
	else if(dY==0) YInc = 0;
	else YInc = -1;

	dX = Abs(dX);
	dY = Abs(dY);

	if(dX>dY) Distance = dX;
	else Distance = dY;

	if(S.Thickness>1){
		Tck = S.Thickness>>1;
		FS.XSPos = S.XSPos;
		FS.YSPos = S.YSPos;
		FS.FillCol = S.LineCol;
		FS.Thickness = 0;
		FS.Radius = Tck+1;
		FS.Fill = ENABLE;
		Circle(FS);
		FS.XSPos = S.XEPos;
		FS.YSPos = S.YEPos;
		Circle(FS);
	}

	for(Cnt = 0; Cnt<=Distance+1; Cnt++){
		for(TCnt = 0; TCnt<S.Thickness; TCnt++){
			WritePix(XS, YS+TCnt, S.LineCol);
			WritePix(XS-TCnt, YS, S.LineCol);
			WritePix(XS+TCnt, YS, S.LineCol);
			WritePix(XS, YS-TCnt, S.LineCol);
		}

		XErr+=dX;
		YErr+=dY;
		if(XErr>Distance){
			XErr-=Distance;
			XS+=XInc;
		}
		if(YErr>Distance){
			YErr-=Distance;
			YS+=YInc;
		}
	}
	return 0;
}

int8_t LineP(ShapeParamStruct S){
	uint8_t XE, YE;

	S.XEPos = S.XSPos+((S.Radius*FCos(S.Angle))>>12);
	S.YEPos = S.YSPos+((S.Radius*FSin(S.Angle))>>12);
	return LineC(S);
}

/*
uint8_t Ellipse(uint8_t XS, uint8_t YS, uint8_t XR, uint8_t YR, Colours8 Col){
	if((XS+XR)<0 || (XS+XR)>XPix || (YS+YR)<0 || (YS+YR)>YPix) return 1;
	const uint16_t Res = 256;
	uint16_t Cnt;
	uint8_t X, Y;

	for(Cnt = 0; Cnt<Res; Cnt++){
		X = XS+((XR*ST[(Cnt+64)&255])>>7);
		Y = YS+((YR*ST[Cnt&255])>>7);
		WritePix(X, Y, Col);
	}
	return 0;
}

uint8_t Semicircle(uint8_t XS, uint8_t YS, uint8_t R, uint8_t Rot, Colours8 Col){
	if((XS+R)>XPix || (YS+R)>YPix) return 1;

	int X, Y, D, X2M1;
	Y = R;
	D = -R;
	X2M1 = -1;

	for(X = 0; X<(float)R*0.7071f; X++){
		X2M1+=2;
		D+=X2M1;
		if(D>=0){
			Y--;
			D-= (Y<<1);
		}
		switch(Rot){
		case 0:
			WritePix(XS+X, YS-Y, Col);
			WritePix(XS-X, YS-Y, Col);
			WritePix(XS+Y, YS-X, Col);
			WritePix(XS-Y, YS-X, Col);
			break;

		case 1:
			WritePix(XS+Y, YS+X, Col);
			WritePix(XS+Y, YS-X, Col);
			WritePix(XS+X, YS+Y, Col);
			WritePix(XS+X, YS-Y, Col);
			break;

		case 2:
			WritePix(XS+X, YS+Y, Col);
			WritePix(XS-X, YS+Y, Col);
			WritePix(XS+Y, YS+X, Col);
			WritePix(XS-Y, YS+X, Col);
			break;

		case 3:
			WritePix(XS-Y, YS+X, Col);
			WritePix(XS-Y, YS-X, Col);
			WritePix(XS-X, YS+Y, Col);
			WritePix(XS-X, YS-Y, Col);
			break;
		}
	}
	switch(Rot){
	case 0:
	case 2:
		LineL(XS-(R-1), YS, XS+(R), YS, Col);
		break;
	case 1:
	case 3:
		LineL(XS, YS-(R-1), XS, YS+R, Col);
		break;
	}
	return 0;
}

uint8_t Rect(uint8_t XS, uint8_t YS, uint8_t XE, uint8_t YE, Colours8 Col){
	if((XE-XS)>XPix-1 || (YE-YS)>YPix-1) return 1;
	if(XS==XE || YS==YE) return 2;
	uint8_t XCnt, YCnt;
	for(XCnt = XS; XCnt<=XE; XCnt++){
		WritePix(XCnt, YS, Col);
		WritePix(XCnt, YE, Col);
	}
	for(YCnt = YS; YCnt<=YE; YCnt++){
		WritePix(XS, YCnt, Col);
		WritePix(XE, YCnt, Col);
	}
	return 0;
}

uint8_t FillRec(uint8_t XS, uint8_t YS, uint8_t XE, uint8_t YE, uint8_t LCol, uint8_t FCol){
	if((XE-XS)>XPix-1 || (YE-YS)>YPix-1) return 1;
	if(XS==XE || YS==YE) return 2;

	uint8_t XCnt, YCnt, LCnt;

	//Draw borders
	for(LCnt = XS; LCnt<=XE; LCnt++){
		WritePix(LCnt, YS, LCol);
		WritePix(LCnt, YE, LCol);
	}
	for(LCnt = YS; LCnt<=YE; LCnt++){
		WritePix(XS, LCnt, LCol);
		WritePix(XE, LCnt, LCol);
	}

	//Fill
	for(YCnt = YS+1; YCnt<YE; YCnt++){
		for(XCnt = XS+1; XCnt<XE; XCnt++){
			WritePix(XCnt, YCnt, FCol);
		}
	}
	return 0;
}

uint8_t LineP(uint8_t XS, uint8_t YS, uint8_t R, int16_t Angle, Colours8 Col){
	uint8_t XE, YE;

	//while(Angle>360) Angle-=360;
	//XE = XS+((R*ST[((Angle+90)*256/360)&255])>>7);
	//YE = YS+((R*ST[(Angle*256/360)&255])>>7);
	XE = XS+((R*FCos(Angle))>>12);
	YE = YS+((R*FSin(Angle))>>12);
	return LineC(XS, YS, XE, YE, Col);
}

uint8_t Circle(int16_t XS, int16_t YS, int16_t R, Colours8 Col){
	if((XS+R)>XPix || (YS+R)>YPix) return 1;

	int X, Y, D, X2M1;
	Y = R;
	D = -R;
	X2M1 = -1;

	for(X = 0; X<R/sqrt(2); X++){
		X2M1+=2;
		D+=X2M1;
		if(D>=0){
			Y--;
			D-= (Y<<1);
		}

		WritePix(XS+X, YS+Y, Col);
		WritePix(XS-X, YS+Y, Col);
		WritePix(XS+X, YS-Y, Col);
		WritePix(XS-X, YS-Y, Col);
		WritePix(XS+Y, YS+X, Col);
		WritePix(XS-Y, YS+X, Col);
		WritePix(XS+Y, YS-X, Col);
		WritePix(XS-Y, YS-X, Col);
	}
	return 0;
}

uint8_t Ellipse(uint8_t XS, uint8_t YS, uint8_t XR, uint8_t YR, Colours8 Col){
	if((XS+XR)<0 || (XS+XR)>XPix || (YS+YR)<0 || (YS+YR)>YPix) return 1;
	const uint16_t Res = 256;
	uint16_t Cnt;
	uint8_t X, Y;

	for(Cnt = 0; Cnt<Res; Cnt++){
		X = XS+((XR*ST[(Cnt+64)&255])>>7);
		Y = YS+((YR*ST[Cnt&255])>>7);
		WritePix(X, Y, Col);
	}
	return 0;
}

uint8_t Semicircle(uint8_t XS, uint8_t YS, uint8_t R, uint8_t Rot, Colours8 Col){
	if((XS+R)>XPix || (YS+R)>YPix) return 1;

	int X, Y, D, X2M1;
	Y = R;
	D = -R;
	X2M1 = -1;

	for(X = 0; X<(float)R*0.7071f; X++){
		X2M1+=2;
		D+=X2M1;
		if(D>=0){
			Y--;
			D-= (Y<<1);
		}
		switch(Rot){
		case 0:
			WritePix(XS+X, YS-Y, Col);
			WritePix(XS-X, YS-Y, Col);
			WritePix(XS+Y, YS-X, Col);
			WritePix(XS-Y, YS-X, Col);
			break;

		case 1:
			WritePix(XS+Y, YS+X, Col);
			WritePix(XS+Y, YS-X, Col);
			WritePix(XS+X, YS+Y, Col);
			WritePix(XS+X, YS-Y, Col);
			break;

		case 2:
			WritePix(XS+X, YS+Y, Col);
			WritePix(XS-X, YS+Y, Col);
			WritePix(XS+Y, YS+X, Col);
			WritePix(XS-Y, YS+X, Col);
			break;

		case 3:
			WritePix(XS-Y, YS+X, Col);
			WritePix(XS-Y, YS-X, Col);
			WritePix(XS-X, YS+Y, Col);
			WritePix(XS-X, YS-Y, Col);
			break;
		}
	}
	switch(Rot){
	case 0:
	case 2:
		LineL(XS-(R-1), YS, XS+(R), YS, Col);
		break;
	case 1:
	case 3:
		LineL(XS, YS-(R-1), XS, YS+R, Col);
		break;
	}
	return 0;
}

uint8_t Rect(uint8_t XS, uint8_t YS, uint8_t XE, uint8_t YE, Colours8 Col){
	if((XE-XS)>XPix-1 || (YE-YS)>YPix-1) return 1;
	if(XS==XE || YS==YE) return 2;
	uint8_t XCnt, YCnt;
	for(XCnt = XS; XCnt<=XE; XCnt++){
		WritePix(XCnt, YS, Col);
		WritePix(XCnt, YE, Col);
	}
	for(YCnt = YS; YCnt<=YE; YCnt++){
		WritePix(XS, YCnt, Col);
		WritePix(XE, YCnt, Col);
	}
	return 0;
}

uint8_t FillRec(uint8_t XS, uint8_t YS, uint8_t XE, uint8_t YE, uint8_t LCol, uint8_t FCol){
	if((XE-XS)>XPix-1 || (YE-YS)>YPix-1) return 1;
	if(XS==XE || YS==YE) return 2;

	uint8_t XCnt, YCnt, LCnt;

	//Draw borders
	for(LCnt = XS; LCnt<=XE; LCnt++){
		WritePix(LCnt, YS, LCol);
		WritePix(LCnt, YE, LCol);
	}
	for(LCnt = YS; LCnt<=YE; LCnt++){
		WritePix(XS, LCnt, LCol);
		WritePix(XE, LCnt, LCol);
	}

	//Fill
	for(YCnt = YS+1; YCnt<YE; YCnt++){
		for(XCnt = XS+1; XCnt<XE; XCnt++){
			WritePix(XCnt, YCnt, FCol);
		}
	}
	return 0;
}

uint8_t LineP(uint8_t XS, uint8_t YS, uint8_t R, int16_t Angle, Colours8 Col){
	uint8_t XE, YE;

	//while(Angle>360) Angle-=360;
	//XE = XS+((R*ST[((Angle+90)*256/360)&255])>>7);
	//YE = YS+((R*ST[(Angle*256/360)&255])>>7);
	XE = XS+((R*FCos(Angle))>>12);
	YE = YS+((R*FSin(Angle))>>12);
	return LineC(XS, YS, XE, YE, Col);
}

uint8_t LineC(uint8_t XS, uint8_t YS, uint8_t XE, uint8_t YE, Colours8 Col){
	if(IAbs(XE-XS)>XPix-1 || IAbs(YE-YS)>YPix-1) return 1;
	int Cnt, Distance;
	int XErr = 0, YErr = 0, dX, dY;
	int XInc, YInc;

	dX = XE-XS;
	dY = YE-YS;

	if(dX>0) XInc = 1;
	else if(dX==0) XInc = 0;
	else XInc = -1;

	if(dY>0) YInc = 1;
	else if(dY==0) YInc = 0;
	else YInc = -1;

	dX = IAbs(dX);
	dY = IAbs(dY);

	if(dX>dY) Distance = dX;
	else Distance = dY;

	for(Cnt = 0; Cnt<=Distance+1; Cnt++){
		WritePix(XS, YS, Col);

		XErr+=dX;
		YErr+=dY;
		if(XErr>Distance){
			XErr-=Distance;
			XS+=XInc;
		}
		if(YErr>Distance){
			YErr-=Distance;
			YS+=YInc;
		}
	}
	return 0;
}

uint8_t Row(uint8_t Y, uint8_t Amount, uint8_t Rows, Colours8 Col){
	if(Amount>(XPix-Y)) return 1;

	uint8_t YCnt, XCnt;

	SetAddr(0, Y, Amount-1, Y+Rows-1);
	for(XCnt = Y; XCnt<(Rows+Y); XCnt++){
		for(YCnt = 0; YCnt<Amount; YCnt++){
			PCol(Col);
		}
	}

	return 0;
}

uint8_t Column(uint8_t X, uint8_t Amount, Colours8 Columns, Colours8 Col){
	if(Amount>(YPix-X)) return 1;

	uint8_t YCnt, XCnt;

	SetAddr(X, 0, X+Columns-1, Amount-1);
	for(XCnt = X; XCnt<(Columns+X); XCnt++){
		for(YCnt = 0; YCnt<Amount; YCnt++){
			PCol(Col);
		}
	}

	return 0;
}

 */
uint32_t Abs(int32_t N){
	if(N>0) return N;
	else return -N;
}

int16_t FSin(int16_t Angle){
	uint16_t Index;
	int16_t AngRet;

	Angle %= 360;

	Index = (Angle*STLen)/360;

	AngRet = (ST[Index]*Angle + ST[Index+1]*(360-Angle))/360;

	return AngRet;
}

int16_t FCos(int16_t Angle){
	return FSin(Angle+450);
}

