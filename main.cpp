#include <iostream>

using namespace std;

int main()
{
    int option1;
    int option2;
    string name;
    string address;
    cout<<"Welcome to the IPhone we sell the best. Feel free no pressure "<<endl;
    cout<<"**************************************************************"<<endl;
    cout<<"Please enter your name : ";
    getline(cin, name);
    cout<<"Please enter your address : ";
    getline(cin, address);
    cout<<endl;
    cout<<"Hey, "<<name<<" Thank you for choosing. Please choose an Iphone below "<<endl;
    cout<<endl;
    cout<<"Enter 1 for the Iphone 11"<<endl;
    cout<<"Enter 2 for the Iphone 12"<<endl;
    cout<<"Enter 3 for the Iphone 13"<<endl;
    cin>>option1;
    cout<<endl;
    switch(option1)
    {
        //Iphone 11 SWITCH CASE
        case 1:
            cout<<"You have selected the Iphone 11"<<endl;
            cout<<"Enter 1 for the iPhone 11 Normal"<<endl;
            cout<<"Enter 2 for the iPhone 11 Pro"<<endl;
            cout<<"Enter 3 for the iPhone 11 Pro Max"<<endl;
            cin>>option2;
            cout<<endl;
            switch(option2)
            {
                //iPhone 11 Normal
                case 1:
                    cout<<"You have selected the iPhone 11 Normal. Great Choice! "<<name<<endl;
                    cout<<"Order Summary "<<endl;
                    cout<<"----------------------------------------------------------------------"<<endl;
                    cout<<"Name of buyer : "<<name<<endl;
                    cout<<"Price : R3000"<<endl;
                    cout<<"Color : Green"<<endl;
                    cout<<"To be shipped to : "<<address<<endl;
                    cout<<"Date for shipment : 23 October 2026"<<endl;
                    cout<<"Remember that Mr Owami's assignment is due on the 23 Of October xoxoxo"<<endl;
                    cout<<"----------------------------------------------------------------------"<<endl;
                    break;
                //iPhone 11 Pro
                case 2:
                    cout<<"You have selected the iPhone 11 Pro. Great Choice! "<<name<<endl;
                    cout<<"Order Summary "<<endl;
                    cout<<"----------------------------------------------------------------------"<<endl;
                    cout<<"Name of buyer : "<<name<<endl;
                    cout<<"Price : R3400"<<endl;
                    cout<<"Color : Sky Blue"<<endl;
                    cout<<"To be shipped to : "<<address<<endl;
                    cout<<"Date for shipment : 2 Novemember 2026"<<endl;
                    cout<<"Remember that Mr Owami's assignment is due on the 23 Of October xoxoxo"<<endl;
                    cout<<"----------------------------------------------------------------------"<<endl;
                    break;
                //iPhone 11 Pro Max
                case 3:
                    cout<<"You have selected the iPhone 11 Pro Max. Great Choice! "<<name<<endl;
                    cout<<"Order Summary "<<endl;
                    cout<<"----------------------------------------------------------------------"<<endl;
                    cout<<"Name of buyer : "<<name<<endl;
                    cout<<"Price : R3600"<<endl;
                    cout<<"Color : Yellow"<<endl;
                    cout<<"To be shipped to : "<<address<<endl;
                    cout<<"Date for shipment : 8 Decemeber 2026"<<endl;
                    cout<<"Remember that Mr Owami's assignment is due on the 23 Of October xoxoxo"<<endl;
                    cout<<"----------------------------------------------------------------------"<<endl;
                    break;
            }
            break;

        //iPhone 12 SWITCH CASE
        case 2:
            cout<<"You have selected the Iphone 12"<<endl;
            cout<<"Enter 1 for the iPhone 12 Mini"<<endl;
            cout<<"Enter 2 for the iPhone 12 Pro"<<endl;
            cout<<"Enter 3 for the iPhone 12 Pro Max"<<endl;
            cin>>option2;
            cout<<endl;
            switch(option2)
            {
                //iPhone 12 Mini
                case 1:
                    cout<<"You have selected the iPhone 12 Mini. Great Choice! "<<name<<endl;
                    cout<<"Order Summary "<<endl;
                    cout<<"----------------------------------------------------------------------"<<endl;
                    cout<<"Name of buyer : "<<name<<endl;
                    cout<<"Price : R4000"<<endl;
                    cout<<"Color : Red"<<endl;
                    cout<<"To be shipped to : "<<address<<endl;
                    cout<<"Date for shipment : 23 October 2026"<<endl;
                    cout<<"Remember that Mr Owami's assignment is due on the 23 Of October xoxoxo"<<endl;
                    cout<<"----------------------------------------------------------------------"<<endl;
                    break;
                //iPhone 12 Pro
                case 2:
                    cout<<"You have selected the iPhone 11 Pro. Great Choice! "<<name<<endl;
                    cout<<"Order Summary "<<endl;
                    cout<<"----------------------------------------------------------------------"<<endl;
                    cout<<"Name of buyer : "<<name<<endl;
                    cout<<"Price : R4400"<<endl;
                    cout<<"Color : Pink"<<endl;
                    cout<<"To be shipped to : "<<address<<endl;
                    cout<<"Date for shipment : 2 Novemember 2026"<<endl;
                    cout<<"Remember that Mr Owami's assignment is due on the 23 Of October xoxoxo"<<endl;
                    cout<<"----------------------------------------------------------------------"<<endl;
                    break;
                //iPhone 12 Pro Max
                case 3:
                    cout<<"You have selected the iPhone 11 Pro Max. Great Choice! "<<name<<endl;
                    cout<<"Order Summary "<<endl;
                    cout<<"----------------------------------------------------------------------"<<endl;
                    cout<<"Name of buyer : "<<name<<endl;
                    cout<<"Price : R4600"<<endl;
                    cout<<"Color : Royal Blue"<<endl;
                    cout<<"To be shipped to : "<<address<<endl;
                    cout<<"Date for shipment : 8 Decemeber 2026"<<endl;
                    cout<<"Remember that Mr Owami's assignment is due on the 23 Of October xoxoxo"<<endl;
                    cout<<"----------------------------------------------------------------------"<<endl;
                    break;
            }
            break;

        //iPhone 13 SWITCH CASE
        case 3:
            cout<<"You have selected the Iphone 13"<<endl;
            cout<<"Enter 1 for the iPhone 13 Plus"<<endl;
            cout<<"Enter 2 for the iPhone 13 Pro"<<endl;
            cout<<"Enter 3 for the iPhone 13 Pro Max"<<endl;
            cin>>option2;
            cout<<endl;
            switch(option2)
            {
                //iPhone 13 Plus
                case 1:
                    cout<<"You have selected the iPhone 13 Plus. Great Choice! "<<name<<endl;
                    cout<<"Order Summary "<<endl;
                    cout<<"----------------------------------------------------------------------"<<endl;
                    cout<<"Name of buyer : "<<name<<endl;
                    cout<<"Price : R5000"<<endl;
                    cout<<"Color : Orange"<<endl;
                    cout<<"To be shipped to : "<<address<<endl;
                    cout<<"Date for shipment : 23 Setpember 2026"<<endl;
                    cout<<"Remember that Mr Owami's assignment is due on the 23 Of October xoxoxo"<<endl;
                    cout<<"----------------------------------------------------------------------"<<endl;
                    break;
                //iPhone 13 Pro
                case 2:
                    cout<<"You have selected the iPhone 11 Pro. Great Choice! "<<name<<endl;
                    cout<<"Order Summary "<<endl;
                    cout<<"----------------------------------------------------------------------"<<endl;
                    cout<<"Name of buyer : "<<name<<endl;
                    cout<<"Price : R5400"<<endl;
                    cout<<"Color : Black"<<endl;
                    cout<<"To be shipped to : "<<address<<endl;
                    cout<<"Date for shipment : 2 June 2026"<<endl;
                    cout<<"Remember that Mr Owami's assignment is due on the 23 Of October xoxoxo"<<endl;
                    cout<<"----------------------------------------------------------------------"<<endl;
                    break;
                //iPhone 13 Pro Max
                case 3:
                    cout<<"You have selected the iPhone 11 Pro Max. Great Choice! "<<name<<endl;
                    cout<<"Order Summary "<<endl;
                    cout<<"----------------------------------------------------------------------"<<endl;
                    cout<<"Name of buyer : "<<name<<endl;
                    cout<<"Price : R5600"<<endl;
                    cout<<"Color : Chrome"<<endl;
                    cout<<"To be shipped to : "<<address<<endl;
                    cout<<"Date for shipment : 8 July 2026"<<endl;
                    cout<<"Remember that Mr Owami's assignment is due on the 23 Of October xoxoxo"<<endl;
                    cout<<"----------------------------------------------------------------------"<<endl;
                    break;
            }
            break;
        default:
            cout<<"Hey "<<name<<"Please learn to read"<<endl;
            cout<<"Invalid Option"<<endl;
            break;

    }
    return 0;
}
