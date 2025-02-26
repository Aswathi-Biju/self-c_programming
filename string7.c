#include<stdio.h>
int main(){
	char string[40];
	int i,j,v_count=0,c_count=0, count ;
	printf("Enter a string:\n");
	scanf("%[^\n]",string);
	for(i=0;string[i]!='\0';i++){
        if ((string[i] >= 'A' && string[i] <= 'Z') || (string[i] >= 'a' && string[i] <= 'z')){
		    if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u' || string[i]=='A' || string[i]=='E' || string[i]=='I' || string[i]=='O' || string[i]=='U'){
			    v_count++;
		    } else{
                c_count++; 
		    }
        }
	}
	printf("Vowels : %d \n", v_count);
	printf("Consonants : %d \n", c_count);
	return 0;
}