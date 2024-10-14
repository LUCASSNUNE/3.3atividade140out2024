#include <stdio.h>
#include<math.h>

int main(){
    
    int idade;
    
    printf ("informe sua idade: ");
    scanf ("%d", &idade);
    if ( idade <=10) {
        printf ("infantil");
    }
    else if ( idade >=17) {
        printf ("senior");
}
    else {
        printf ("juvenil");
}
}