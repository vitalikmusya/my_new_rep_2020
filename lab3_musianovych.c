#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void algo(int * input_numbers, int numbers){
    for (int i = 0; i < numbers; i++) {//[1][-1][2][-2][3]//[0][0][2][-2][3]//[0][0][0][0][3]
        for (int j = 0; j < numbers; j++) {
            if (input_numbers[i] != 0 && input_numbers[j] != 0 && i != j) {
                if (abs(input_numbers[i]) - abs(input_numbers[j]) == 0 && input_numbers[i]!=input_numbers[j]) {
                    //printf("DBG: i:%d j:%d [%d %d]\n", i, j, input_numbers[i], input_numbers[j]);
                    input_numbers[i] = 0;
                    input_numbers[j] = 0;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < numbers; i++) {
        if (input_numbers[i] != 0) {
            printf("%d ", input_numbers[i]);
        }
    }
    printf("\n");
}

int main() {
    int input_numbers[20];//static stack arr[][]

    //int arr = (int**)malloc(8*sizeof(int*));   //dynamic heap arr[][]
    
    printf("amount of numbers :");
    int numbers = 0;

    scanf("%d",&numbers);


    for(int i = 0; i<numbers; i++){
        printf("Number%d :",(i+1));
        int b;
        scanf("%d",&b);
        input_numbers[i]=b;
    }

    algo(input_numbers,numbers);


}