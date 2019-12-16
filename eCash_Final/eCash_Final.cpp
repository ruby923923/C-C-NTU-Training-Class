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
			cout << "eCash: �п�J�z���b��: ";
			cin>>ID;
			file = fopen(ID, "r");
			if(file == NULL)
			{
				cout <<ID<<"�b�����s�b, �Ĥ@���ϥ�!"<< endl;
				file = fopen(ID, "w");
				fprintf(file,"%d\n", 0);
				fclose(file);
			}
			else
			{
				fscanf(file,"%d", &Money);	
				fclose(file);
				cout <<"ecash: �b���}�ҧ���!"<< endl; 
			}
		
		}
		
		void logout() 
		{ 
			file = fopen(ID, "w");
			fprintf(file,"%d\n", Money);
			fclose(file);
			cout << "eCash: �b���n�X, �w�s��! "<< endl;
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
       			cout<<"eCash: �п�J�j��0�����B" << endl;	
			}			
			else
			{
				Money += m;
				file = fopen(ID, "w");
				fprintf(file,"%d\n", Money);
				fclose(file);
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
				file = fopen(ID, "w");
				fprintf(file,"%d\n", Money);
				fclose(file);
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
        
        cout<<"=== �w��ϥ�eCash ==="<< endl;  
		ecash.login();

        while(1)
        {
                cout<< endl <<ecash.getID()<<"�z�n�A�п�ܶ���:" << endl;
                cout<<"s: �x��"<< endl;
                cout<<"p: ���O"<< endl;
                cout<<"d: ��ܾl�B"<< endl;
                cout<<"q: ���}"<< endl;
                cout<<"> ";
                cin>> status;
                switch (status)
                {
                case 's':
                        cout<<"�п�J�x�s���B:"<< endl;
                        cin>> money;
                        ecash.store(money);
                        system("pause");
                        break;
                case 'p':
                        cout<<"�п�J���O���B:"<< endl;
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
                        cout<<"���¡AByeBye!"<< endl;
                        system("pause");
						return 0;
				default:
						cout <<"Sorry, �L���\��"<< endl;
				}
                system("pause");   
                system("cls");
        }
        return 0;
}
