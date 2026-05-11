#include <stdio.h>
// Define a structure for a Motor Control Unit
struct Motor {
    int id;
    int speed;
    char status; // here we implyfing A-active and S - Stopped
};
// Function using a pointer to modify the structure directly
void setMotorSpeed(struct Motor *m, int newSpeed) {
    if (newSpeed > 0) {
        m->speed = newSpeed; 
        m->status = 'A';
    } else {
        m->speed = 0;
        m->status = 'S';
    }
}
int main() {
    struct Motor m1 = {101, 0, 'S'};
    printf("Initial: Motor %d, Speed: %d, Status: %c\n", m1.id, m1.speed, m1.status);
    // Pass the address of m1 to the function
    setMotorSpeed(&m1, 750);
    printf("Updated: Motor %d, Speed: %d, Status: %c\n", m1.id, m1.speed, m1.status);
    return 0;
}
