/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดง จำนวนเฉพาะ ตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ Do While Loop เท่านั้น)
    
    Test case:
        Enter number :
            10
    Output:
        7 5 3 2

    Test case:
        Enter number :
            100
    Output:
        97 89 83 79 73 71 67 61 59 53 47 43 41 37 31 29 23 19 17 13 11 7 5 3 2
*/


#include <stdio.h>

int main() {
    int limit;
    
    printf("Enter number: ");
    scanf("%d", &limit);
    
    int num = limit;
    int is_prime = 1; // Assuming num is prime
    
    do {
        if (num <= 1) {
            is_prime = 0;
        } else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    is_prime = 0;
                    break;
                }
            }
        }
        
        if (is_prime) {
            printf("%d ", num);
        }
        
        num--;
        is_prime = 1; // Reset is_prime for the next iteration
    } while (num >= 2);
    
    printf("\n");
    
    return 0;
}
















// #include<stdio.h>

// int main(){

//     int n,i;

//     printf("Enter number :");
//     scanf("%d" , &n);

//     do{
//        if (n%2 == 1)
//        {
//         int in = n%2 == 1;
//         printf("%d", in);
//        }

        

//     }while(n > i);    

//     return 0;
// }