#include <stdio.h>
//requires: an integer
//effects: absolute value of the input integer
int abs(int x);


int msb (int x){
    int counter =  0;
    while (x != 0){
        counter++;
        x = x/2;
    }
    return counter;
}

//requires: two positive integers
//effects: assuming the inputs are positive integers, keeps outputing the Hamming distance between the bit representations of those two integer
//         until the an non-positive integer is inputed
int main(){
    int input_1, input_2;
    while (1){
        scanf("%d", &input_1);
        if (input_1 > 0 && input 2 > 0){
            break;
        }
        scanf("%d", &input_2);
        if (input_2 <= 0){
            break;
        }
        printf("%d\n",abs(msb(input_1)-msb(input_2)));
    }
    
    return 0;    
}