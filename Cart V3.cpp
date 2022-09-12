#include<iostream>
#include<cstdio>
#include<ctime>
#include<string.h>
#include <stdio.h>
#include<conio.h>
#include<cstdlib>
#include<cstring>
#include<time.h>
#include<windows.h>
#include<fstream>
using namespace std;



//  ***  Global Variables And function ***

string user,user1,pass,pass1;
long long int total[10];
int qua[10];
//int delay = 1.0;
int z=0;
int fitem=0;
long long int final;
string name,city,state,house;
long long int phon=0,pin;
string item[50];
int itemp[50];
string pho[5] = {"Apple_Iphone_14pro","Redmi_Note_9Pro","Google_Pixel_5a","samsung_S20_ultra","OnePlus_Nord_2"};
int phop[5] = {120000,15000,37000,80000,27000};
string lap[5] = {"Msi_Gf-65_Thin","Asus_Tuf_F15","Acer_Predator_i5","Realme_Notebook","Apple_Macbook"};
int lapp[5] = {75000,80000,56000,40000,90000};
string sma[5] = {"Apple_Smartwatch","Boat_Smartwatch","Fitbit_Smartwatch","Realme_Smartwatch","Fireboltt_smartwatch"};
int smap[5] = {25000,4000,5000,3000,2500};
string spe[5] = {"Jbl_Speakers","Boat_Speakers","Realme_Speakers","Amazon_Echo_Dot","Google_Assistant"};
int spep[5] = {10000,4000,3000,6000,7000};
string acc[5] = {"LG_SmartAc","Samsung_SmartAc","Panasonic_1.5Ton_Ac","Realme_SmartAc","Whirpool_2Ton_AC"};
int accp[5] = {56000,45000,35000,42000,27000};

int phone();

int laptop();

int smart();

int speakers();

int ac();

void repeat();
void logo();
void cart();
void checkout();
void checkout2();
void captcha();
void loading();

void menu();
void confirm();
void login(string a,string b);
void reg();
void lag()
{
    int delay = 1.5;
    delay *= CLOCKS_PER_SEC;

    clock_t now = clock();

    while(clock() - now <delay);

}



//           *** Main Function ***


int main()
{
    string re = "new";
    system("cls");
    logo();
    cout<<"\n !!!! Enter \"new\" keyword in username for new user registration...."<<endl<<endl;
    cout<<"\n\t\t\t*** Login Here ***"<<endl<<endl<<endl;
    cout<<"Username : ";
    cin>>user;
    if(user==re)
    {
        reg();
    }else
    {
         cout<<"Password : ";
           cin>>pass;

        login(user,pass);

    }








   // menu();

    return 0;
}


//  *** LOGO ***


void logo()
{
    cout<<"     *************************     "<<endl;
    cout<<"     *                       *   "<<endl;
    cout<<"     *        CART.COM       *   "<<endl;
    cout<<"     *                       *   "<<endl;
    cout<<"     *************************     "<<endl<<endl;
}



//  *** Menu ****



void menu()

{

    int choice;

    system("cls");

    logo();

    cout<<endl<<"*****  WELCOME TO CART.COM, "<<name<<" *****"<<endl;
    cout<<":: Press 0 ---> To View Your Cart ::"<<endl<<endl;



    cout<<"List of available items: "<<endl;



    cout<<"1. Smartphone"<<endl;

    cout<<"2. Laptop"<<endl;

    cout<<"3. smart watch"<<endl;

    cout<<"4. speakers"<<endl;

    cout<<"5. Air conditioner"<<endl<<endl;

    cout<<"what would you like to order : ";

    cin>>choice;



    switch(choice)

    {
    case 0:
        cart();
        break;

    case 1 :
        phone();

        break;

    case 2 :
        laptop();

        break;

    case 3 :
        smart();

        break;

    case 4 :
        speakers();

        break;

    case 5 :
        ac();

        break;

    default :
        cout<<"\n\n\t\t\tXXXX -----  invalid entry, please try again ---- XXXX"<<endl;
        lag();
        menu();

        break;



    }

}



//    *** cart page ***

void cart()

{
    string ke;
    long long int pay = 0;
    int temp,code,wish;

    system("cls");
    logo();
    cout<<":: Press 99 ---> Go Back To Main Menu        ::"<<endl;
    cout<<":: Press  0 ---> Proceed to Checkout Page    ::"<<endl<<endl;;



    for(int i= 0 ; i<z; i++)

    {

        cout<<i+1<<". "<<item[i]<<"\n"<<"                                   -------> Rs. "<<itemp[i]<<"   x  "<<qua[i]<<endl;
        pay = total[i] + pay;
        fitem = fitem + qua[i];
    }

    cout<<endl<<endl<<endl<<"\n\n\n\n Total Price : \n                                   -------> Rs. "<<pay<<endl;
    final=pay;

    cout<<"\n\n\n\nEnter Your Choice Here: ";
    cin>>wish;

    if(wish==99)
    {
        menu();
    }
    else if(wish==0 && final>0 && phon==0)
    {
        checkout();
    }
    else if(final == 0)
    {
        system("cls");
        logo();
        cout<<"\n\n\n \t\t\t\t\t      xxx   Your Cart Is Empty  xxx";
        lag();
        cout<<"\n\n\npress Any Key To GO back to Main Menu ::"<<endl;
        cin>>ke;
        menu();
    }
    else if(phon>0)
    {
        checkout2();

    }
    else
    {
        cout<<"\n\n\t\t\tXXXX -----  invalid entry, please try again ---- XXXX"<<endl;
        lag();
        cart();
    }


}

//   *** checkout Page ****

void checkout()
{
    system("cls");
    logo();
    cout<<"  step(1/2)\n"<<endl;
    cout<<"\t\t\t\t\t:: Enter Your Contact Details :: \n\n";
    cout<<"Enter Your Name :";
    cin>>name;
    cout<<"Enter Your Phone No : ";
    cin>>phon;
    cout<<"enter House No : ";
    cin>>house;
    cout<<"Enter Your City : ";
    cin>>city;
    cout<<"Enter Your State : ";
    cin>>state;
    cout<<"Enter Your Area Pincode : ";
    cin>>pin;

    cout<<"\n\n\n\t\t\t |||| Your Details Are Recorded, Confirm Your Details On Next Page ||||";
    lag();
    lag();

    checkout2();
}

//   **** 2nd Checkout Page ****

void checkout2()
{
    int deli = 0;
    int tax = 29;
    int kok;
    system("cls");
    logo();
    cout<<"  step(2/2)\n"<<endl;
    cout<<"\t\t\t\t\t:: confirm Your Order Details :: \n\n";

    cout<<" Shipping Address : ";
    cout<<"\n\t\t\t"<<name<<endl;
    cout<<"\t\t\t"<<"House No - "<<house<<endl;
    cout<<"\t\t\t"<<city<<", "<<state<<endl;
    cout<<"\t\t\t"<<"Pincode - "<<pin<<endl;
    cout<<"\t\t\t"<<"Contact No : "<<phon<<endl;
    cout<<"\n\n Price Details: "<<endl;
    cout<<"\t\t\t"<<"Price("<<fitem<<" items)     --->  Rs. "<<final<<endl;;
    cout<<"\t\t\t"<<"Discount           --->  Rs. 0"<<endl;
    cout<<"\t\t\t"<<"Delivery Charges   --->  Rs. "<<deli<<endl;
    cout<<"\t\t\t"<<"Service Charges    --->  Rs. "<<tax<<endl;
    cout<<"\n\t\t\t"<<"Total Amount       --->  Rs. "<<final+tax<<endl;

    cout<<"press 1 --> GO back to Main Menu ::"<<endl;

    cout<<"press 0 --> To Place Your Order  ::"<<endl;

    cout<<"enter your choice : ";

    cin>>kok;

    if(kok==1)
    {
        menu();
    }
    else if(kok==0)
    {
        captcha();
    }
    else
    {
        cout<<"\n\n\t\t\tXXXX -----  invalid entry, please try again ---- XXXX"<<endl;
        lag();
        checkout2();
    }


}

//   *** captcha ***

void captcha()
{
    int temp,code;
    system("cls");

    while(temp!=code)
    {
        logo();
        cout<<"\n\n\nEnter below code to confirm your order:\n\n";
        srand(time(0));
        temp = rand()%1000 +1 ;
        cout<<"     *************************     "<<endl;
        cout<<"     *                       *   "<<endl;
        cout<<"     *         "<<temp<<"           *   "<<endl;
        cout<<"     *                       *   "<<endl;
        cout<<"     *************************     "<<endl<<endl;

        cout<<"Enter code here: ";
        cin>>code;
        system("cls");
        if(code!=temp)
        {

            logo();
            cout<<"\n\n\t\t\t  XXX  Wrong Answer, Try Again XXX \n\n";
            lag();
            system("cls");
        }


    }
    if(code==temp && final>0)
    {
        loading();
    }

}

//  *** loading Screen ***

void loading()
{
    system("cls");
    logo();
    cout<<"\n\n\t\t::::::: Wait A Second While We Process YOUR ORDER ::::::::";
    lag();
    lag();
    system("cls");
    logo();
    cout<<"\n\n\t\t ****** Order Confirmed ******";
    lag();
    lag();
    confirm();
}

//   *** confirm page *****

void confirm()
{
    long int temp;
    system("cls");
    logo();
    srand(time(0));
    temp = rand()%10000000 +1 ;
    cout<<"\n\tThanks you for shopping with us!!!!!"<<endl;
    cout <<"\n\nYour order no. is "<<temp<<endl;
    cout<<"your order will be delivered in 2-3 days."<<endl;


}





// *** Phone Section ***


int phone()
{
    int pbuy,pq;

    system("cls");
    logo();

    cout<<":: Press 99 ---> Go Back To Main Menu ::"<<endl;
    cout<<":: Press  0 ---> To View Your Cart    ::"<<endl<<endl;;

    cout<<":::: SMARTPHONE SECTION :::"<<endl<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<i+1<<". "<<pho[i];
        cout<<"\n";
        cout<<"                       ------>  Rs. "<<phop[i]<<endl<<endl<<endl;
    }
    cout<<"Select your phone model : ";
    cin>>pbuy;
    if(pbuy==1 || pbuy==2 || pbuy==3 || pbuy==4 || pbuy==5)
    {
        cout<<"enter quantity : ";
        cin>>pq;

        cout<<endl<<endl<<"        |||| Item added to cart successfully ||||  \n"<<endl<<endl;
        total[z] = phop[pbuy-1] * pq;
        item[z] = pho[pbuy-1];
        itemp[z] = phop[pbuy-1];
        qua[z] = pq;
        z++;
        lag();
        repeat();

    }
    else if(pbuy==99)
    {
        menu();
    }
    else if(pbuy == 0)
    {
        cart();
    }
    else
    {
        cout<<"\n\n\t\t\tXXXX -----  invalid entry, please try again ---- XXXX"<<endl;
        lag();
        phone();
    }


}




//   *** LAptop Section ***



int laptop()

{

    int pbuy,pq;

    system("cls");

    logo();
    cout<<":: Press 99 ---> Go Back To Main Menu ::"<<endl;
    cout<<":: Press  0 ---> To View Your Cart    ::"<<endl<<endl;;


    cout<<":::: LAPTOP SECTION :::"<<endl<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<i+1<<". "<<lap[i];
        cout<<"\n";
        cout<<"                       ------>  Rs. "<<lapp[i]<<endl<<endl<<endl;
    }


    cout<<"Select your Laptop model : ";

    cin>>pbuy;

    if(pbuy==1 || pbuy==2 || pbuy==3 || pbuy==4 || pbuy==5)
    {
        cout<<"enter quantity : ";
        cin>>pq;

        cout<<endl<<endl<<"        |||| Item added to cart successfully ||||  \n"<<endl<<endl;
        total[z] = lapp[pbuy-1] * pq;
        item[z] = lap[pbuy-1];
        itemp[z] = lapp[pbuy-1];
        qua[z] = pq;
        z++;
        lag();
        repeat();

    }
    else if(pbuy==99)
    {
        menu();
    }
    else if(pbuy == 0)
    {
        cart();
    }
    else
    {
        cout<<"\n\n\t\t\tXXXX -----  invalid entry, please try again ---- XXXX"<<endl;
        lag();
        laptop();
    }

}



//   ***Smartwatch section ***



int smart()

{

    int pbuy,pq;


    system("cls");

    logo();
    cout<<":: Press 99 ---> Go Back To Main Menu ::"<<endl;
    cout<<":: Press  0 ---> To View Your Cart    ::"<<endl<<endl;;


    cout<<":::: SMARTWATCH SECTION :::"<<endl<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<i+1<<". "<<sma[i];
        cout<<"\n";
        cout<<"                       ------>  Rs. "<<smap[i]<<endl<<endl<<endl;
    }

    cout<<"Select your Smartwatch model : ";

    cin>>pbuy;

    if(pbuy==1 || pbuy==2 || pbuy==3 || pbuy==4 || pbuy==5)
    {
        cout<<"enter quantity : ";
        cin>>pq;

        cout<<endl<<endl<<"        |||| Item added to cart successfully ||||  \n"<<endl<<endl;
        total[z] = smap[pbuy-1] * pq;
        item[z] = sma[pbuy-1];
        itemp[z] = smap[pbuy-1];
        qua[z] = pq;
        z++;
        lag();
        repeat();

    }
    else if(pbuy==99)
    {
        menu();
    }
    else if(pbuy == 0)
    {
        cart();
    }
    else
    {
        cout<<"\n\n\t\t\tXXXX -----  invalid entry, please try again ---- XXXX"<<endl;
        lag();
        smart();
    }

}





//   *** Speakers Section ***

int speakers()

{

    int pbuy,pq;

    system("cls");

    logo();
    cout<<":: Press 99 ---> Go Back To Main Menu ::"<<endl;
    cout<<":: Press  0 ---> To View Your Cart    ::"<<endl<<endl;;


    cout<<":::: SPEAKERS SECTION :::"<<endl<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<i+1<<". "<<spe[i];
        cout<<"\n";
        cout<<"                       ------>  Rs. "<<spep[i]<<endl<<endl<<endl;
    }



    cout<<"Select your Speakers model : ";

    cin>>pbuy;

    if(pbuy==1 || pbuy==2 || pbuy==3 || pbuy==4 || pbuy==5)
    {
        cout<<"enter quantity : ";
        cin>>pq;

        cout<<endl<<endl<<"        |||| Item added to cart successfully ||||  \n"<<endl<<endl;
        total[z] = spep[pbuy-1] * pq;
        item[z] = spe[pbuy-1];
        itemp[z] = spep[pbuy-1];
        qua[z] = pq;
        z++;
        lag();
        repeat();

    }
    else if(pbuy==99)
    {
        menu();
    }
    else if(pbuy == 0)
    {
        cart();
    }
    else
    {
        cout<<"\n\n\t\t\tXXXX -----  invalid entry, please try again ---- XXXX"<<endl;
        lag();
        speakers();
    }



}



//  *** Ac SEction ***



int ac()

{

    int pbuy,pq;

    system("cls");

    logo();
    cout<<":: Press 99 ---> Go Back To Main Menu ::"<<endl;
    cout<<":: Press  0 ---> To View Your Cart    ::"<<endl<<endl;;

    cout<<":::: AIR CONDITIONER SECTION :::"<<endl<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<i+1<<". "<<acc[i];
        cout<<"\n";
        cout<<"                       ------>  Rs. "<<accp[i]<<endl<<endl<<endl;
    }

    cout<<"Select your AC model : ";

    cin>>pbuy;

    if(pbuy==1 || pbuy==2 || pbuy==3 || pbuy==4 || pbuy==5)
    {
        cout<<"enter quantity : ";
        cin>>pq;

        cout<<endl<<endl<<"        |||| Item added to cart successfully ||||  \n"<<endl<<endl;
        total[z] = accp[pbuy-1] * pq;
        item[z] = acc[pbuy-1];
        itemp[z] = accp[pbuy-1];
        qua[z] = pq;
        z++;
        lag();
        repeat();

    }
    else if(pbuy==99)
    {
        menu();
    }
    else if(pbuy == 0)
    {
        cart();
    }
    else
    {
        cout<<"\n\n\t\t\tXXXX -----  invalid entry, please try again ---- XXXX"<<endl;
        lag();
        ac();
    }


}



// *** repeat Function ***



void repeat()

{
    system("cls");
    logo();

    int ph;

    cout<<"press 1 --> To Add More Item in cart ::"<<endl;

    cout<<"press 0 --> To View Your Cart ::"<<endl;

    cout<<"enter your choice : ";

    cin>>ph;



    if(ph==1)

    {

        menu();

    }
    else if(ph==0)
    {

        cart();

    }
    else
    {
        cout<<"\n\n\t\t\tXXXX -----  invalid entry, please try again ---- XXXX"<<endl;
        lag();
        repeat();
    }

}

//  *** login page ***

void login(string a,string b)
{
    string c;
    ofstream ofile;
    ofile.open("data.txt",ios::app);
    ofile.close();

    ifstream ifile;
    ifile.open("data.txt");

        while(ifile)
    {
        ifile>>user1;
        ifile>>pass1;
        ifile>>c;

        if(a==user1 && b==pass1)
        {
            name=c;
            menu();
            break;
        }

    }
    if(ifile.eof())
    {
        start:
        system("cls");
        logo();
        cout<<"\n\n\t\t\t\t ??? No user found ???"<<endl<<endl;
        cout<<"press 1 ---> Go back to login page!"<<endl;
        cout<<"press 2 ---> New User Registration Page!"<<endl<<endl;
        cout<<"Enter your choice : ";
        int d;
        cin>>d;

        if(d==1)
        {
            main();
        }else if(d==2)
           {
            reg();
           }
           else
           {
               system("cls");
               logo();
               cout<<"\n\n\n\t\t\t --- Invalid Request, Try again ---";
               lag();
               goto start;

           }

        reg();
    }
    ifile.close();
}

//   *** registration page ***

void reg()
{
    string a,b,c;
    system("cls");
    logo();
    cout<<"\n\t\t\t*** New User Registration ***"<<endl<<endl<<endl;
    cout<<"Enter Your name: ";
    cin>>a;
    cout<<"enter your username : ";
    cin>>b;
    cout<<"enter your password : ";
    cin>>c;

    ofstream ofile;
    ofile.open("data.txt",ios::app);
    ofile<<b<<" ";
    ofile<<c<<" ";
    ofile<<a<<endl;

    system("cls");
    logo();
    cout<<"\n\n\n\t\tUser Registered Successfully !!!";
    lag();
    main();
}
