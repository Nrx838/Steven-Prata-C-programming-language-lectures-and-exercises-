#include <stdio.h>
int jolly();
int deny();

int main() {
    jolly();
    jolly();
    jolly();
    deny();
    return 0;
}
int jolly(){
    printf("He's a funny fellow!\n");

}
int deny(){
    printf("No one can deny it!");
}