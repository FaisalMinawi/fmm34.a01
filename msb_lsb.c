#include <stdio.h>

//requires: an integer
//effects: most significant "1" bit in the binary representation 
int msb (int x){
    int counter =  -1;
    while (x != 0){
        counter++;
        x = x/2;
    }
    return counter;
}
//requires: an integer
//effects: lest significant "1" bit in the binary representation
int lsb(int x){
    if (x % 2 != 0){
        return 0;
    }
    else{
        int counter = 0;
        while((x!=0) && (x % 2 == 0)){
            counter++;
            x = x/2;
        }
        return counter;
    }
}
//requires: a positive integer
//effects: keeps outputing the distance between the first and last bits set to 1
//         until the user inputs a non-positve integer
int main(){
    int input_1;
    while (1){
        scanf("%d", &input_1);
        if (input_1 <= 0){
            break;
        }
        printf("%d\n",msb(input_1) - lsb(input_1));
    }
    return 0;
}
