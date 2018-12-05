// Enable printf
// #include <stdio.h>

// int main() {
//     int a = 0, b = 1, c = 2, d = 3, e = 4;
//     a = b - c + d * e;
//     printf("Good, Morning!");
//     printf("%d", a);
//     return 0;
// }

// Arrays
// int main(){
//     int numbers[10];
//     numbers[0] = 10;
//     numbers[1] = 20;
//     numbers[2] = 30;
//     numbers[3] = 40;
//     numbers[4] = 50;
//     numbers[5] = 60;
//     numbers[6] = 70;
//     printf("The 7th number in the array is %d", numbers[6]);
//     return 0;
// }

// Multidimensional Arrays
// int main(){
//     char vowels[][5] = {
//         {'A', 'E', 'I', 'O', 'U'},
//         {'a', 'e', 'i', 'o', 'u'}};
//     int a[3][4] = {
//         {0, 1, 2, 3},  /*  initializers for row indexed by 0 */
//         {4, 5, 6, 7},  /*  initializers for row indexed by 1 */
//         {8, 9, 10, 11} /*  initializers for row indexed by 2 */
//     };

//     printf("The 7th number in the array is %d", vowels[1][1]);
//     return 0;
// }

#include <stdio.h>

int main()
{
    /* TODO: declare the 2D array grades here */
    float average;
    int i;
    int j;
    int grades[i][j];
    grades[0][0] = 80;
    grades[0][1] = 70;
    grades[0][2] = 65;
    grades[0][3] = 89;
    grades[0][4] = 90;

    grades[1][0] = 85;
    grades[1][1] = 80;
    grades[1][2] = 80;
    grades[1][3] = 82;
    grades[1][4] = 87;

    /* TODO: complete the for loop with appropriate terminating conditions */
    for (i = 0; i < 2; i++)
    {
        average = 0;
        for (j = 0; j < 5; j++)
        {
            average += grades[i][j];
        }

        /* TODO: compute the average marks for subject i */
        printf("The average marks obtained in subject %d is: %.2f\n", i, average);
    }

    return 0;
}