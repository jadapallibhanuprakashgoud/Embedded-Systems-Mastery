#include <stdio.h>
typedef union{
    float voltage;
    int errorcode;
}systemdata;
typedef struct{
    unsigned int engine_on:1;
    unsigned int flight_mode:2;
    unsigned int battery_warn:1;
    unsigned int reserve:4;

}droneregister;
int main(){
    //union representation 
    systemdata data;
    data.voltage=12.5;
    printf("the voltage is %.1f\n",data.voltage);
    data.errorcode=404;
    printf("the error code is %d\n",data.errorcode);
    //voltage after error code 
    printf("the voltage after error code is %.1f\n",data.voltage);
    printf("the size of the union is %d\n",sizeof(data));
    droneregister register_0;
    printf("the size of the droneregister is %d\n",sizeof(register_0));
    
    register_0.engine_on=1;
    register_0.flight_mode=2;
    register_0.battery_warn=0;
    register_0.reserve=0;

    printf("engine on: %d\n",register_0.engine_on);
    printf("flight mode: %d\n",register_0.flight_mode);
    printf("battery warning: %d\n",register_0.battery_warn);
    printf("reserve: %d\n",register_0.reserve);
    return 0;
}
