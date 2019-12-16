#include <iostream>
#include <string>
using namespace std;

class eCash
{
private:
        int  Money;
        char ID[50];
public:
        eCash()
		{	
        	Money = 0;
		}

        ~eCash()
		{
        	cout<<""<<endl;
		}
        
        void login()
		{
			cout << "eCash: 請輸入您的帳號: ";
			cin>>ID;
			file = fopen(ID, "r");
			if(file == NULL)
			{
				cout <<ID<<"帳號不存在, 第一次使用!"<< endl;
				file = fopen(ID, "w");
				fprintf(file,"%d\n", 0);
				fclose(file);
			}
			else
			{
				fscanf(file,"%d", &Money);	
				fclose(file);
				cout <<"ecash: 帳號開啟完成!"<< endl; 
			}
		
		}
		
		void logout() 
		{ 
			file = fopen(ID, "w");
			fprintf(file,"%d\n", Money);
			fclose(file);
			cout << "eCash: 帳號登出, 已存檔! "<< endl;
		}
		
		string getID()
		{
			return ID;
		}
        
        FILE *file;
        void store(int m)
        {
       		if(m <= 0)
       		{
       			cout<<"eCash: 請輸入大於0的金額" << endl;	
			}			
			else
			{
				Money += m;
				file = fopen(ID, "w");
				fprintf(file,"%d\n", Money);
				fclose(file);
				cout<<"eCash: 您存了" << m << "元" << endl;
			}		
		}
       
        void pay(int m)
		{
	        if(m > Money)
	        {
	            cout<< "eCash: 您的錢不夠" << endl;
	            return;
	        }
	        else if(m <= 0)
       		{
       			cout<<"eCash: 請輸入大於0的金額" << endl;	
			}
	        else
			{
	            cout <<"eCash: 您花了" << m << "元" << endl;
				Money -= m;    
				file = fopen(ID, "w");
				fprintf(file,"%d\n", Money);
				fclose(file);
			}		    	
		}
        
        void display()
		{
			cout<<"eCash: 您尚有" << Money << "元" << endl;		
		}       
};

int main()
{
        char   status;
        int    money = 0;
        eCash  ecash;
        
        cout<<"=== 歡迎使用eCash ==="<< endl;  
		ecash.login();

        while(1)
        {
                cout<< endl <<ecash.getID()<<"您好，請選擇項目:" << endl;
                cout<<"s: 儲值"<< endl;
                cout<<"p: 消費"<< endl;
                cout<<"d: 顯示餘額"<< endl;
                cout<<"q: 離開"<< endl;
                cout<<"> ";
                cin>> status;
                switch (status)
                {
                case 's':
                        cout<<"請輸入儲存金額:"<< endl;
                        cin>> money;
                        ecash.store(money);
                        system("pause");
                        break;
                case 'p':
                        cout<<"請輸入消費金額:"<< endl;
                        cin>> money;
                        ecash.pay(money);
                        system("pause");
                        break;                                         
                case 'd':
                        ecash.display();
                        system("pause");
                        break;        
                case 'q':
                		ecash.logout();
                        cout<<"謝謝，ByeBye!"<< endl;
                        system("pause");
						return 0;
				default:
						cout <<"Sorry, 無此功能"<< endl;
				}
                system("pause");   
                system("cls");
        }
        return 0;
}
