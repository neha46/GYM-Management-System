#include<bits/stdc++.h>
using namespace std;
int main()
{
    int choice,month,bill;
    cout<<"\n";
    cout<<" Notice--->  Charges for per month for GYM (  for student is 300,   for Employee is 500 , for Buissness man is 700)  RUP!\n"<<endl;
    cout<<"******************************GYM Management System***************************\n"<<endl;
    while(1){


    cout<<"->1.For students"<<endl;
        cout<<"->2.For Employes"<<endl;
            cout<<"->3.For Buisnes man"<<endl;
                cout<<"->4.to exit program\n\n"<<endl;

                cout<<"................hi! enter your  choice............"<<endl;
                cin>>choice;

                if(choice==4)
                    exit(0);
                if(choice>4)
                    cout<<"(((((((you entered a wrong value ! Please try again!)))))))"<<endl;
                    if(choice==1|| choice==2|| choice==3)
                    {
                        switch(choice)
                        {

                        case 1:
                            cout<<"Enter number of month"<<endl;
                            cin>>month;
                            bill=month*300;
                            cout<<"<student have  "<<bill<<" rupees bill for "<<month<<" months>"<<endl;
                            cout<<"thanks for joining :)"<<endl;
                            cout<<"\n\n"<<endl;
                                  cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n"<<endl;
                            break;
                        case 2:
                            cout<<"Enter number of month"<<endl;
                            cin>>month;
                            bill=month*500;
                            cout<<"<Employee have  "<<bill<<" rupees bill for "<<month<<" months>"<<endl;
                            cout<<"thanks for joining :)"<<endl;
                            cout<<"\n\n"<<endl;
                                  cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n"<<endl;
                            break;
                        case 3:
                            cout<<"Enter number of month"<<endl;
                            cin>>month;
                            bill=month*700;
                            cout<<"<Buissness man have  "<<bill<<" rupees bill for "<<month<<" months>"<<endl;
                            cout<<"thanks for joining :)"<<endl;
                            cout<<"\n\n"<<endl;
                                  cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n"<<endl;
                            break;
                        }

                    }

    }
}
