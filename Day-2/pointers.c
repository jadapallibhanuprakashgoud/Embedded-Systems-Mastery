#include<stdio.h>
//starting with an main function
int main(){
//creating an sensors array with 3 values
    unsigned char sensors[3]={0x00,0x02,0x03};
    // creating an pointer address with the name pointer
    unsigned char *pointer=sensors;
    
    printf("The pointer values addressing \n");
    //creating an for loop with 3 notations
    for(int i=0;i<3;i++){
    //here printing the i with -%D and pointer location with %p and the hex value 0x%02X
        printf("sensors %d address %p | value: 0x%02X \n",i,(void*)(pointer+i),*(pointer+i));
        //here we used (void*)(pointer+i)= pointers generak notataion with i increment , and to display the value in the pointer address=*(pointer+i)
    }
    return 0;
}
