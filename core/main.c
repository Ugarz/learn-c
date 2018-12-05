// Enable printf
#include <stdio.h>

// int main() {
//     int a = 0, b = 1, c = 2, d = 3, e = 4;
//     a = b - c + d * e;
//     printf("Good, Morning!");
//     printf("%d", a);
//     return 0;
// }

int main(){
    int numbers[10];
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    numbers[5] = 60;
    numbers[6] = 70;
    printf("The 7th number in the array is %d", numbers[6]);
    return 0;
}