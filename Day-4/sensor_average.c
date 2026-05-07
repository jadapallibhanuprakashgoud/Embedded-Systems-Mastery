#include<stdio.h>
  float calculateAverage(int array[],int size);
int main(){
    int sensors[5]={12,14,15,17,18};
    float average;
    average=calculateAverage(sensors,5);
    printf("the average of the sensor readings is :%2.f\n",average);
    }
    float calculateAverage(int array[],int size){
        int sum=0;
        for (int i=0;i<size;i++){
            sum+=array[i];
        }
    return (float)sum/size;
    }
