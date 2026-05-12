#include<stdio.h>
int main(){
    //Bitwise sergical strike 
    unsigned char system_status=0x0A;
    //assigned the binary value 00001010 to the systemstatus
    printf("Initial status : 0x%02X \n", system_status);

    //checking the bit 1 is on or off
    if(system_status & (1<<1)){
        printf("bit 1 is on \n");
    }else{
        printf("bit 1 is off \n");
    }
    //checking thhe bit 2 is on or off 
    if(system_status &(1<<2)){
        printf("bit 2 is on\n");
    }else{
        printf("bit 2 is off \n");
    }
    system_status |=(1<<0);
    system_status |=(1<<2);
    printf("after setting the bit 0 : 0x%02X \n",system_status);

      if(system_status &(1<<2)){
        printf("bit 2 is on\n");
    }else{
        printf("bit 2 is off \n");
    }
    system_status ^=(1<<3);
    printf("after toggling the bit 3 : 0x%02X \n",system_status);
    
    return 0;
}
