#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, j;
	double sum=0, aver;
	int **student;
	int m, n;
	printf("請輸入班級數目: ");
	scanf("%d", &m);
	printf("請輸入每班人數: ");
	scanf("%d", &n);
	
	student = (int**)malloc(sizeof(int*)*m);
	for(j=0;j<m;j++){
		student[j]=(int*)malloc(sizeof(int)*n);
	}
	
	for(j=0;j<m;j++){
		printf("班級%d:\n", j+1);
		sum=0;
		for(i=0;i<n;i++){
			printf("學生%d: ", i+1);
			scanf("%d", &student[j][i]);	
			sum+=student[j][i];					
		}
			printf("班平均為：%lf\n",sum/n);	
	}	
		
	for(j=0;j<m;j++)
		for(i=0;i<n;i++)
		sum+=student[j][i];	
		
	aver=sum/(m*n);
	printf("全校平均為：%lf\n",aver);	

	for(j=0;j<m;j++){
		free(student[j]);
	}
	free(student);
return 0;	
}
