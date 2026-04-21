struct data{
	int day;
	int month;
	int year;
};
int main(){
	struct data d ;
	printf("Enter the Data \n");
	printf("Day");
	scanf("%d",&d.day);
	
	printf("Month");
	scanf("%d",&d.month);
	
	printf("Year");
	scanf("%d",&d.year);
	
	printf("%d / %d / %d ", d.day, d.month, d.year);
	

	return 0;
	
}