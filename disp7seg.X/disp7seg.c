/*
 * File:   disp7seg.c
 * Author: 20185189
 *
 * Created on 24 de Fevereiro de 2021, 15:43
 */


#include <xc.h>

char vetor[16] = { 0x3F, 0x06, 0x5B, 0x4F,
                   0x66, 0x6D, 0x7D, 0x07,
                   0x7F, 0x6F, 0x77, 0x7C,
                   0x39, 0x5E, 0x79, 0x71};

void disp7seg_init(void)
{
    TRISD = 0x00;
    PORTD = 0x00;
}

void disp7seg(int digito)
{
    if(digito >=0 && digito <=15)
        PORTD = vetor[digito];
    else
        PORTD = 0x7B;
}

