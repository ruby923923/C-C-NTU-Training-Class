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
				for(j=0;j<4;j++){//不是a即檢查是否為b
					if(ans[i]==gus[j]){//檢查gus裡的每一個是否跟ans[i]一樣
						b++;//是的話就讓b的計數變數+1 
					}
				}		
			}
		}
		printf("%dA%dB\n",a,b);
			
		
	}
	

	
	

	puts("You Win!");
	
		return 0;
}
