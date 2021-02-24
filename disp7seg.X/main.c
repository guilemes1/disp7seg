/*
 * File:   main.c
 * Author: 20185189
 *
 * Created on 24 de Fevereiro de 2021, 14:07
 */

#include "disp7seg.h"
#include <xc.h>
#include "config.h"
#include "delay.h"

void main(void) 
{
    int cont = 0;
    disp7seg_init();
    
    while(1)
    {
        disp7seg(cont);
        delay(1000);
        cont++;
        if(cont >= 16)
            cont = 0;
    }
}
