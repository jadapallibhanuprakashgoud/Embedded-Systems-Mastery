#include<stdio.h>

    //here  we have used const so this value dosent change
    //we cant even write an code to chnge this value
    const unsigned int lider_value=0x400;

    //static : this variable private to this file 
    //it stays in the memory even the function ends but dosent get affected

   static int system_boot=0;

    void read_lider(){
        volatile unsigned int *lider_data=(unsigned int *)lider_value;

        system_boot++;
        printf("the system boot count starting :%d\n",system_boot);
        printf("addressing of the lider valre is :%p\n",(void*)&lider_data);
        printf("the sensor data captured sucessfully \n\n");

    }

    int main(){
        read_lider();
        read_lider();
    }
    
    
