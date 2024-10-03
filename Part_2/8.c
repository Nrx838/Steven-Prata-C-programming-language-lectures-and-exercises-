#include <stdio.h>
void one_three();
void two();
void N();

int main() {
    printf("begin:"), N(), one_three(), printf("order!");
    

}
void one_three(){
    printf("one"), N(), two(), N(), printf("three"), N();    
}

void two(){
    printf("two");
}
void N(){
    printf("\n");
}