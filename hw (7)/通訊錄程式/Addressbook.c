#include <stdio.h> 
#include <stdlib.h> 

#define PEOPLE 50 

struct _Person 
{ 
	char name[80]; 
	char phone[80]; 
	char email[80]; 
}; 
typedef struct _Person Person; 

int main() 
{ 
	FILE *input; 
	FILE *output; 
	Person p[PEOPLE],newP[PEOPLE];
	char key; 
	char str[80]; 
	int n=0; 
	int i; 
	
	while(1) 
	{ 
		printf("i: 插入\n"); 
		printf("l: 列出\n"); 
		printf("s: 存檔\n"); 
		printf("o: 讀檔\n"); 
		printf("q: 結束\n"); 
		printf("> "); 
		
		key = getche(); 
		printf("\n"); 
		switch(key) 
		{ 
			case 'i': 
				printf("Name: "); 
				gets(p[n].name); 
				printf("Phone: "); 
				gets(p[n].phone); 
				printf("Email: "); 
				gets(p[n].email); 
				n++; 
				printf("插入完成!\n"); 
				break; 
			
			case 'l': 
				for(i=0; i<n; i++) 
				{ 
					printf("Name: %s\n", p[i].name); 
					printf("Phone: %s\n", p[i].phone); 
					printf("Email: %s\n", p[i].email); 
				} 
				break; 
				
			case 's': 
				printf("輸入檔名(.txt): "); 
				gets(str); 
				output=fopen(str,"w");
				for (i=0;i<n;i++) 
					fprintf(output,"%s %s %s\n",p[i].name,p[i].phone,p[i].email); 
				fclose(output); 
				break; 
			
			case 'o': 
				do{ 
					printf("輸入檔名(.txt): "); 
					gets(str); 
					input=fopen(str,"r"); 
				}
				while(input == NULL);
				
				for (i=0;i<n;i++) 
					fscanf(input,"%s %s %s\n",newP[i].name,newP[i].phone,newP[i].email); 
				fclose(input); 
				
				for(i=0; i<n; i++)
				{  
					printf("Name: %s\n", newP[i].name); 
					printf("Phone: %s\n", newP[i].phone); 
					printf("Email: %s\n", newP[i].email); 
				} 
				break; 
				
			case 'q': 
				printf("再見\n"); 
				return 0; 
				
			default: 
				printf("輸入錯誤\n"); 
		} 
		system("pause"); 
		system("cls"); 
	} 

return 0; 
} 

