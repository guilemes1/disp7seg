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
    int cont;
    disp7seg_init();
    
    while(1)
    {
        for(cont = 0; cont <= 20; cont++)
        {
            disp7seg(cont);
            delay(1000); 
        }
    }
}
