#include <stdio.h>
#include <string.h>

int countBlank(char t[])
{
    int count = 0;
    for (int i = 0; i <strlen(t); i++){
        if(t[i] == ' '){
            count++;
        }
    }
    return count;
}
int main (){
    char a[1000];
    printf("Enter a line ");
    fgets(a, sizeof(a), stdin);
    printf("The number of blanks: %d \n", countBlank(a) );
}