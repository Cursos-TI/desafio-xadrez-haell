#include <stdio.h>


void recurssiva(int n){

    if (n > 0){
        printf("n = %d\n", n);  
        recurssiva(n - 1);
    }
}


int main(){
    int n = 5;
    recurssiva(n);
    return 0;


}
