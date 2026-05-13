#include<stdio.h>
int main(){
    volatile unsigned char motorreg=0x00;
    //note this volatile keyword most important in the embedded code --
    //this tells the compiler to not to optimize this particular value 
    //because there might be constant chnage in the motorreg value..
    printf("Motor starting sequence :\n");
    motorreg=0x01;
    motorreg=0x00;
    motorreg=0x01;

    if(motorreg&0x01){
        printf("The motor is turn on ::\n");
        printf("The motor is turn on :: %p",(void*)&motorreg); 
    }
    //In this if we rmove the volatile keyword 
    //practicallly we are just wasting the sequence entry 
    return 0;

}
