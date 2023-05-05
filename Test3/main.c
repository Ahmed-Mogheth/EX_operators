#include <stdio.h>
#include <stdlib.h>

unsigned char Btn_State = 0x55;     /* 0101 0101 */
unsigned char HNM_1 = 0x0F;         /* 0000 1111 */

unsigned char HNM_2 = 0x0F;         /* 1010 1010 */
unsigned char Btn_State_2 = 0xFF;   /* 1111 1111 */

int main()
{
    //Btn_State = Btn_State & 0b00001111;
    //Btn_State = Btn_State & 0b00000000;
    printf("Btn_State = 0x%X \n", Btn_State & HNM_1);   /* 0000 0101 */
    printf("Btn_State = 0x%X \n", Btn_State_2 & HNM_2); /* 1010 1010 */
    return 0;
}
