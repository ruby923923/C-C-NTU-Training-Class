#include<stdio.h>
#include<stdlib.h>



int main()
{
	char ans[5];
	char gus[5];
	int a=0,b=0;
	int i,j;
	
	gets(ans);

	
	while(a!=4){
		gets(gus);
		a=0;
		b=0;
		for(i=0;i<4;i++){
			if(ans[i]==gus[i]){
				a++;
			}
			else{			
				for(j=0;j<4;j++){//���Oa�Y�ˬd�O�_��b
					if(ans[i]==gus[j]){//�ˬdgus�̪��C�@�ӬO�_��ans[i]�@��
						b++;//�O���ܴN��b���p���ܼ�+1 
					}
				}		
			}
		}
		printf("%dA%dB\n",a,b);
			
		
	}
	

	
	

	puts("You Win!");
	
		return 0;
}
