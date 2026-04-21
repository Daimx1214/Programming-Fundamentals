// write a program to find prime number and odd num from 1 to 50 by using function through pointer
#include<stdio.h>

  void number(int *num){
	int count = 0;  
  
	for(int i=2;i<=*num;i++){
		count=0;
		for(int b=2;b<i;b++){
			if(i%b==0){
				count++;
				
			}
		}

        if (count==0  ) {
		
        printf("%d is prime\n ",i);
                         }
        if (i%2==1){
        	printf("%d is odd\n ",i );
		}
                        }
     
}
int main(){
	int num ;
	printf("Enter the number ");
	scanf("%d",&num);
    number(&num) ;
	return 0;
}