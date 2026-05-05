#include <stdio.h>

// created an structure box 
struct Sensor {
    int id;
    int value;
};
int main() {
    // the array consistes of three values
    struct Sensor data[3] = {
        {1, 100}, 
        {2, 250}, 
        {3, 500}
    };
    printf("--- Simple Drone Sensor Log ---\n");
    // 3. using loops tp print that values from array 
    for (int i = 0; i < 3; i++) {
        printf("Sensor ID: %d | Value: %d\n", data[i].id, data[i].value);
    }
    return 0;
}
