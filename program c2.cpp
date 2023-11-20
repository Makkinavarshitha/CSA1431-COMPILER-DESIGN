 #include <stdio.h>
    int main() {
        
        char comment[50];
        int i = 2, a = 0;
        
        printf("Enter Comment : ");
        gets(comment);
        if(comment[0] == '/'){
            if(comment[1] == '/'){
                printf("This is Single Line Comment.");
            }
            else if(comment[1] == '*'){
                for(i = 2; i <= 50; i++){
                    if(comment[i]=='*' && comment[i + 1] == '/'){
                        printf("This is Multi Line Comment.");
                        a = 1;
                        break;
                    }
                    else{
                        continue;
                    }
                }
                if(a == 0){
                    printf("It is not a comment");
                }
            }
            else{
                printf("It is not a comment");
            }
        }
        else{
            printf("It is not a comment");
        }
        
        return 0;
    }
    
