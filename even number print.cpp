#include <stdio.h>  
   
int main() {  
    int counter; 
    printf("Even numbers between 1 to 8\n");  
    
    for(counter = 1; counter <= 8; counter++) {  
        
        if(counter%2 == 0) 
		{ 
           
            printf("%d\n ", counter);  
        }  
    }  
   
    return 0; 
}
