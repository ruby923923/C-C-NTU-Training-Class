#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, j;
	double sum=0, aver;
	int **student;
	int m, n;
	printf("�п�J�Z�żƥ�: ");
	scanf("%d", &m);
	printf("�п�J�C�Z�H��: ");
	scanf("%d", &n);
	
	student = (int**)malloc(sizeof(int*)*m);
	for(j=0;j<m;j++){
		student[j]=(int*)malloc(sizeof(int)*n);
	}
	
	for(j=0;j<m;j++){
		printf("�Z��%d:\n", j+1);
		sum=0;
		for(i=0;i<n;i++){
			printf("�ǥ�%d: ", i+1);
			scanf("%d", &student[j][i]);	
			sum+=student[j][i];					
		}
			printf("�Z�������G%lf\n",sum/n);	
	}	
		
	for(j=0;j<m;j++)
		for(i=0;i<n;i++)
		sum+=student[j][i];	
		
	aver=sum/(m*n);
	printf("���ե������G%lf\n",aver);	

	for(j=0;j<m;j++){
		free(student[j]);
	}
	free(student);
return 0;	
}
