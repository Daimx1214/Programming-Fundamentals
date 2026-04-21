//1.Basic Structure Definition: Write a program to define a structure named Student with the following members:
//name (string)
//rollNumber (integer)
//marks (float)
#include<stdio.h>
#include<string.h>
struct  student{
	char s[50];
	int a;
	float f;
};
int main(){
struct student std;

  std.s =  "daim ali";
  std.a = 20;
  std.f = 20.346;
  
  printf("%s\n", std.s);
  printf("%d\n", std.a);
  printf("%f", std.f);

return 0;
}