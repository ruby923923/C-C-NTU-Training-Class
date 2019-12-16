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
       			cout<<"eCash: �п�J�j��0�����B" << endl;	
			}			
			else
			{
				Money += m;
				cout<<"eCash: �z�s�F" << m << "��" << endl;
			}		
		}
       
        void pay(int m)
		{
	        if(m > Money)
	        {
	            cout<< "eCash: �z��������" << endl;
	            return;
	        }
	        else if(m <= 0)
       		{
       			cout<<"eCash: �п�J�j��0�����B" << endl;	
			}
	        else
			{
	            cout <<"eCash: �z��F" << m << "��" << endl;
	       		 Money -= m;    
			}		    	
		}
        
        void display()
		{
			cout<<"eCash: �z�|��" << Money << "��" << endl;		
		}       
};

int main()
{
        char   status;
        int    money = 0;
        eCash  ecash;
        while(1)
        {
                cout<<"=== �w��ϥ�eCash ===\n";
                cout<<"\n";
                cout<<"�z�n�A�п�ܶ���:\n";
                cout<<"s: �x��\n";
                cout<<"p: ���O\n";
                cout<<"d: ��ܾl�B\n";
                cout<<"q: ���}\n";
                cout<<"> ";
                cin>> status;
                switch (status)
                {
                case 's':
                        cout<<"�п�J�x�s���B:\n";
                        cin>> money;
                        ecash.store(money);
                        system("pause");
                        break;
                case 'p':
                        cout<<"�п�J���O���B:\n";
                        cin>> money;
                        ecash.pay(money);
                        system("pause");
                         break;                                         
                case 'd':
                        ecash.display();
                        system("pause");
                         break;        
                case 'q':
                        cout<<"���¡AByeBye!\n";
                        break;
                default:
                        break;
                }
                system("pause");   
                system("cls");
        }
        return 0;
}
