#include<stdio.h>
void binary_system(unsigned char n){
    for(int i=7;i>=0;i--){
        int bit=(n>>i)&1;
        printf("%d",bit);
    }
}
int main(){
    unsigned char reg=0;
    printf("before setting the bits :");
    binary_system(reg);
    printf("\n");
    reg |=(1<<0);
    reg |=(1<<7);
    printf("after setting the bits :");
    binary_system(reg);
    printf("\n");
    if (reg &(1<<7)){
        printf("The system is armed\n");
    }
    return 0;
}
