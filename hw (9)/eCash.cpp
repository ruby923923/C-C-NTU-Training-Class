#include <iostream>
#include <string>
using namespace std;

class eCash
{
private:
        int  Money;
public:
        eCash()
		{	
        	Money = 0;
		}

        ~eCash()
		{
        	cout<<""<<endl;
		}
        
        void store(int m)
        {
       		if(m <= 0)
       		{
       			cout<<"eCash: 請輸入大於0的金額" << endl;	
			}			
			else
			{
				Money += m;
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
        while(1)
        {
                cout<<"=== 歡迎使用eCash ===\n";
                cout<<"\n";
                cout<<"您好，請選擇項目:\n";
                cout<<"s: 儲值\n";
                cout<<"p: 消費\n";
                cout<<"d: 顯示餘額\n";
                cout<<"q: 離開\n";
                cout<<"> ";
                cin>> status;
                switch (status)
                {
                case 's':
                        cout<<"請輸入儲存金額:\n";
                        cin>> money;
                        ecash.store(money);
                        system("pause");
                        break;
                case 'p':
                        cout<<"請輸入消費金額:\n";
                        cin>> money;
                        ecash.pay(money);
                        system("pause");
                         break;                                         
                case 'd':
                        ecash.display();
                        system("pause");
                         break;        
                case 'q':
                        cout<<"謝謝，ByeBye!\n";
                        break;
                default:
                        break;
                }
                system("pause");   
                system("cls");
        }
        return 0;
}
