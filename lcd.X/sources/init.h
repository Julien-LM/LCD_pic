/* 
 * File:   init.h
 * Author: julien LM
 *
 * Created on July 30, 2017, 1:14 PM
 */

#include <xc.h>

void Init(void)
{
    TRISB = 0x00;
    ANSC4 = 0;
    ANSC5 = 0;
    ANSC6 = 0;
    ANSC7 = 0;
    TRISC = 0x00;
    ANSB5 = 0;
    ANSB6 = 0;   
    
}

