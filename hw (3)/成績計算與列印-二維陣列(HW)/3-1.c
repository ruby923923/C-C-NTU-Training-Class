#include<stdio.h>
#include<stdlib.h>

#define STU 5
#define SUB 3

int main()
{
	int ary[STU][SUB]={76,73,85,88,84,76,92,82,92,82,91,85,72,74,73};
	double k[STU];
	double x;
	int i,j;
	int sum = 0;
	
	for(j=0;j<STU;j++){
		//printf("student %d\n",j+1);
		for(i=0;i<SUB;i++){
			//printf(" %d: ",i+1);
		}
	}
	/*
	//�L�X 
	for(j=0;j<STU;j++){
		for(i=0;i<SUB;i++){
			printf("%d ", ary[j][i]);
		}
		printf("\n");
	}
	*/
	//��X 
	int MaxAvgPos = 0;
	double MaxAvg = 0; //�ثe�w���̰�������
	for(j=0;j<STU;j++){
		printf("student %d\n",j+1);
		//�U�Z�[�`�e�� �k�s 
		sum = 0;
		for(i=0;i<SUB;i++){
			printf(" %d: %d\n",i+1, ary[j][i]);
			//�[�`�U�Z�`�� 
			sum += ary[j][i];
			x=(double)sum/SUB;
			k[j]=x;
		}
		//�L�X �ӯZ �`���P���� 
		printf(" sum: %d\n", sum);
		printf(" avg: %.2f\n", (double)sum/SUB);
		
		
		//�p�G �o����X�Ӫ�����
		//�j�� �ثe�w���̰�����������
		if(k[j]>MaxAvg){
			MaxAvg=k[j];//�N �N��O����  �ثe�w���̰�������
			MaxAvgPos=j;//���K�O���U  �ثe�w���̰������� �O�ĴX��	
			
		}
		
		
			
			 
	}
	
	//�`�� 
	sum = 0;
	for(j=0;j<STU;j++){
		for(i=0;i<SUB;i++){
			sum += ary[j][i];
		}
	}
	double avg = (double)sum/(STU*SUB);
	printf("total: %d, avg: %.2f\n", sum, avg);
	printf("highest avg: student %d: %.2f\n", MaxAvgPos+1, MaxAvg);
	
	return 0;
}
