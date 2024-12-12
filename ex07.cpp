#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Pham Thi Huyen Trang 123 #*&@";
    int count = 0;
    int number = 0;
    int kitu = 0;
    fflush(stdin);

    for (int i = 0;i<strlen(str); i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')){
		
            count++;
        }
        else if(str[i]>=48 && str[i]<=57){
        	number++;
		}
		else if(str[i]>=33&&str[i]<=47||str[i]==64){
			kitu++;
		}
		
		
		
	
    }

    printf("Chu : %d\n", count);
    printf("So : %d\n",number);
    printf("Ki tu dac biet: %d\n",kitu);
    return 0;
}
