#include <stdio.h>
void br();
void ic();

int main() {
    br(), printf(", "), ic(), printf("\n");
    ic(), printf(",\n");
    br();

}
void br(){
    printf("Brazil, Russia");

}
void ic(){
    printf("Hindi, China");
}