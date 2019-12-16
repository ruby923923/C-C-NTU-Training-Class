#include <stdio.h> 
#include "prime.h"

int IsPrime(int num)
{
	if(num==1){ 
		return 0;
	}else{
		int i;
		for(i=2;i<=num-1;i++){
			if(num%i==0){
				return 0; 
			}
		}
		return 1; 
	}
}
