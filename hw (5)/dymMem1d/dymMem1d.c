#include<stdio.h>
#include<stdlib.h>
int main()
{
	int students;
	int *score;
	int i;
	printf("How many students?");
	scanf("%d",&students);
	score=(int *)malloc( sizeof(int)*students );
	
	for ( i=0; i < students; i++ ){
		printf("student %d=",i);
		scanf("%d",&score[i]);
	}
	 
	int sum=0;
	for(i=0;i<students;i++){
    	sum += score[i];
    } 
	 printf("Avg = %lf\n", (double)sum/students);
	 free(score);
	 return 0;
}
