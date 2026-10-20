#include<stdio.h>

int main()
{
    char UserInput;

    char vowelC[] = {'A', 'E', 'I', 'O', 'U'};
    char vowelS[] = {'a', 'e', 'i', 'o', 'u'};

    printf("enter a character: ");
    scanf(" %c", &UserInput);

    int size = sizeof(vowelC) / sizeof(vowelC[0]);
    int found = 0;

    for(int i = 0; i < size; i++){
        if(UserInput == vowelC[i] || UserInput == vowelS[i]){
            found = 1;
            break;
        }  
    }
    
    if(found == 1){
        printf("it is a vowel");
    }
    else{
        printf("it is a consonant");
    }

    return 0;
}