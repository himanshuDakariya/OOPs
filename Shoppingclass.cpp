#include<iostream>
using namespace std;

class Shopping{
public:
    int itmcode[50];
    int itmprice[50];
    

    static int count;
    void additm(){
        
        cout<<"Enter Item Code: "<<endl;
        cin>>itmcode[count];
        cout<<"Enter its price: "<<endl;
        cin>>itmprice[count];
        count++;
        }
    void displaybill(){
        int sum=0;
        for(int i=0;i<count;i++){
            sum=sum+itmprice[i];

        }
        cout<<"+------------------------------------------+"<<endl;
        cout<<"|   T H A N K S  F O R  S H O P P I N G    |"<<endl;
        cout<<"+--------------------+---------------------+"<<endl;
        cout<<"|     TOTAL AMT.     |  payment status:    |"<<endl;
        cout<<"+--------------------+---------------------+"<<endl;
        cout<<"|                    |                     |"<<endl;
        cout<<" No. of itms:  "<<count<<"       Pending ..."<<endl;
        cout<<"|                    |                     |"<<endl;
        cout<<"+--------------------+---------------------+"<<endl;
        cout<<"|                    |                     |"<<endl;
        cout<<"   Rs."<<sum<<"                             "<<endl;
        cout<<"|                    |                     |"<<endl;
        cout<<"+------------------------------------------+"<<endl;
    }

};
int Shopping::count=0;

int main(){

    Shopping mitesh;
    
    int sel;
    do{cout<<"Welcome to 'SHYAM READYMADE'"<<endl<<"Choose out of the following: "<<endl;
       cout<<"1. Add an item."<<endl;
       cout<<"2.Print bill."<<endl;
       cout<<"3.Quit."<<endl;
       cin>>sel;

    
        if(sel==1){
            mitesh.additm();
            }
        else if(sel==2){
            mitesh.displaybill();
        }
        else if(sel==3){
            cout<<"Thanks for visiting !";
            break;
        }
        else{
            cout<<"Invalid input . . .";
            break;
        }
        

    
    
    
    
    
    
    
    }while(sel!=3);




    return 0;





}