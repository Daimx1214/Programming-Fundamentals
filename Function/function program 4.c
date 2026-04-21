// Function to Check Prime Number
#include <stdio.h>

int prime(int n);

  int main (){
  	int n ;
  	printf("Enter the number");
  	scanf ("%d",&n);
  	
  	 int res = prime( n );
  	if(res==1)
  	printf("%d is prime",n);
    else{
	printf("%d is not prime",n);
  }
  	 return 0;
	   }
  	 
  	int prime( int n )  {
	  int  count =0 ;
	  for(int i=2;i<n;i++){
	  count =0 ;
	  	for(int j=2;j<i;j++){
	  		  
	  		if(i%j==0){
	  		count ++;
	  	    }
		}
}
  	  
		return count; 
  }