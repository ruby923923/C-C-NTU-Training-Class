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
	//印出 
	for(j=0;j<STU;j++){
		for(i=0;i<SUB;i++){
			printf("%d ", ary[j][i]);
		}
		printf("\n");
	}
	*/
	//輸出 
	int MaxAvgPos = 0;
	double MaxAvg = 0; //目前已知最高的平均
	for(j=0;j<STU;j++){
		printf("student %d\n",j+1);
		//各班加總前須 歸零 
		sum = 0;
		for(i=0;i<SUB;i++){
			printf(" %d: %d\n",i+1, ary[j][i]);
			//加總各班總分 
			sum += ary[j][i];
			x=(double)sum/SUB;
			k[j]=x;
		}
		//印出 該班 總分與平均 
		printf(" sum: %d\n", sum);
		printf(" avg: %.2f\n", (double)sum/SUB);
		
		
		//如果 這次算出來的平均
		//大於 目前已知最高的平均的話
		if(k[j]>MaxAvg){
			MaxAvg=k[j];//就 將其記錄為  目前已知最高的平均
			MaxAvgPos=j;//順便記錄下  目前已知最高的平均 是第幾筆	
			
		}
		
		
			
			 
	}
	
	//總分 
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
