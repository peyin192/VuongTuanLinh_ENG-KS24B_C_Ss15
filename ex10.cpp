#include<stdio.h>
#include<string.h>

int main(){
    char text[50] = "hello world";
    int size = strlen(text);
    int number[256] = {0}; 

    for (int i = 0; i < size; i++) {
        number[(int)text[i]]++;
    }

    for (int i = 0; i < 256; i++) {
        if (number[i] > 0) {
            printf("ki tu '%c' xuat hien %d lan\n", (char)i, number[i]);
        }
    }

    return 0; 
}
