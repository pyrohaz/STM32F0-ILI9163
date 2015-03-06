#include <GFXC.h>


/*
 * ILI9163 LCD example program using the STM32F0 Discovery board
 * available from STMicroelectronics
 *
 * Author: Harris Shallcross
 * Year: 06/03/2015
 *
 *Interfacing an ILI9163 LCD through SPI
 *
 *Code and example descriptions can be found on my blog at:
 *www.hsel.co.uk
 *
 *The MIT License (MIT)
 *Copyright (c) 2015 Harris Shallcross
 *
 *Permission is hereby granted, free of charge, to any person obtaining a copy
 *of this software and associated documentation files (the "Software"), to deal
 *in the Software without restriction, including without limitation the rights
 *to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *copies of the Software, and to permit persons to whom the Software is
 *furnished to do so, subject to the following conditions:
 *
 *The above copyright notice and this permission notice shall be included in all
 *copies or substantial portions of the Software.
 *
 *THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 *SOFTWARE.
 */

volatile uint32_t MSec = 0;

TextParamStruct TS;

void SysTick_Handler(void){
	MSec++;
}

int main(void)
{
	SysTick_Config(SystemCoreClock/1000);
	ILI9163Init();

	ClrScrn();
	TS.Size = 1;
	TS.Font = StdFont;
	TS.XPos = 0;
	TS.YPos = 0;
	TS.TxtCol = Blue;
	TS.BkgCol = Black;

	PStr("Hello!", &TS);

    while(1)
    {
    }
}
