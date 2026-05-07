#include<stdio.h>
int main(){
    int sensorValue=150;
    int *psensorValue;
    psensorValue=&sensorValue;

    // lets print the taken value
    printf("the sensorValue is :%d\n",sensorValue);
    printf("the adress of the sensor values is %p\n",&sensorValue);
    printf("\n");
    // lets find the adress stored in the pointer
    printf("the values stored at the psensorValue is :%p\n",psensorValue);
    printf("\n");
    // if older laptops there might be glitch for this so we use void*...
    printf("the adderss of the sensor values stored in ptr is : %p\n",(void*)(psensorValue));
    printf("\n");
    // if we want to update the ptr value we can do like this 
    *psensorValue=200;
    printf("the updated value of the sensorValue is : %d\n",sensorValue);
    printf("\n");
    return 0;
}
