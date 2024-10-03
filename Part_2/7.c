#include <stdio.h>
void smile();

int main() {
    for(int i = 0; i < 3; i++){
        smile();
        if(i == 2){
            printf("\n");
        }
    }
    for(int i = 0; i < 2; i++){
        smile();
        if(i == 1){
            printf("\n");
        }
    }
    smile();

}
void smile(){
    printf("Smile!");

}