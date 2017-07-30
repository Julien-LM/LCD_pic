/* 
 * File:   init.h
 * Author: julien LM
 *
 * Created on July 30, 2017, 1:14 PM
 */

#include <xc.h>
#include "lcd.h"
#include "init.h"


int main()
{
    unsigned int a;

    Init();
    Lcd_Init();
    while(1)
    {
        Lcd_Clear();
        Lcd_Set_Cursor(1,1);
        Lcd_Write_String("Program starting");
        Lcd_Set_Cursor(2,1);
        Lcd_Write_String("...");
        __delay_ms(2000);
        Lcd_Clear();
        Lcd_Set_Cursor(1,1);
        Lcd_Write_String("Developed By");
        Lcd_Set_Cursor(2,1);
        Lcd_Write_String("electroSome");
        __delay_ms(2000);
        Lcd_Clear();
        Lcd_Set_Cursor(1,1);
        Lcd_Write_String("www.electroSome.com");

        for(a=0;a<15;a++)
        {
            __delay_ms(300);
            Lcd_Shift_Left();
        }

        for(a=0;a<15;a++)
        {
            __delay_ms(300);
            Lcd_Shift_Right();
        }

        Lcd_Clear();
        Lcd_Set_Cursor(2,1);
        Lcd_Write_Char('e');
        Lcd_Write_Char('S');
        __delay_ms(2000);
    }
    return 0;
}