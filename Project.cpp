#include <iostream>
using namespace std;
int main()
{
    int flag;
    do
    {
        int choice,count1=0,count2=0,balance=0,attempt=0;
        char option;
        cout<<"========= Welcome To Quiz Game ========= "<<"\n\n";
        cout<<"Options Are : "<<"\n";
        cout<<"1) Number Questions"<<"\n";
        cout<<"2) Game Rules"<<"\n";
        cout<<"3) Start Game"<<"\n";
        cout<<"4) Check balance"<<"\n";
        cout<<"5) Quit Game"<<"\n\n";
        cout<<"Enter Your choice : ";
        cin>>choice;
        cout<<"\n";
        switch(choice)
        {
            case 1:cout<<"Questions : 20";break;
            case 2:cout<<"1. When we ask the question and you reply\ncorrect answer then you won visiual money\n";
                cout<<"2. There are three stages of question from(1-5),\nfrom(6-10),from(10-15) and 16,17\n";
                cout<<"3. There are 16 and 17 number of question is jackpot\nquestions which give you crores of visiual money\n";
                cout<<"4. There are three safety Levels that is on 5 question for 5,000 Rs\n and 10 question for 1,32,000 Rs\n";
                cout<<"5. When you answered wrong then you can be automatically exit\n from the game and you won the \n";
                break;
            case 3:
                 cout<<"1) Which SQL command is used to retrieve data from a database?\n\n";
                    cout<<"A) Insert\tB) Update\n";
                    cout<<"C) Select\tD) Delete\n\n";
                    cout<<"Enter option: ";
                    cin>>option;
                    if(option=='C' || option=='c')
                    {
                        printf("\nCorrect Answer!");
                        count1++;
                        balance = 1000;
                    }
                    else
                    {
                        cout<<"\nWrong Answer!"<<endl;
                        count2++;
                        cout<<"\n\t========= Game Over ========= \t"<<"\n\n";
                        cout<<"Number correct Answer : "<<count1<<"\n";
                        cout<<"Number wrong Answer : "<<count2<<"\n";
                        cout<<"Your Balance : "<<balance<<"\n";
                        attempt++;
                        if(attempt == 1)
                            return 0;
                        else
                        {
                            cout<<"Enter 1 to continue and 0 to exit: ";
                            cin>>flag;
                        }
                    }
                    cout<<"\n\n\n";

                    cout<<"2) Which data structure follows the FIFO principle?\n\n";
                    cout<<"A) Stack \t B) Queue \n";
                    cout<<"C) Tree \t D) Graph\n\n";
                    cout<<"Enter option: ";
                    cin>>option;
                    if(option=='B' || option=='b')
                    {
                        cout<<"\nCorrect Answer\n";
                        count1++;
                        balance = balance + 1000;
                    }
                    else
                    {
                        cout<<"\nWrong Answer!"<<endl;
                        count2++;
                        cout<<"\n\t========= Game Over ========= \t"<<"\n\n";
                        cout<<"Number correct Answer : "<<count1<<"\n";
                        cout<<"Number wrong Answer : "<<count2<<"\n";
                        cout<<"Your Balance : "<<balance<<"\n";
                        attempt++;
                        if(attempt == 1)
                            return 0;
                        else
                        {
                            cout<<"Enter 1 to continue and 0 to exit: ";
                            cin>>flag;
                        }
                    }
                    cout<<"\n\n\n";

                    cout<<"3) Which OOP concept hides internal implementation details from the user?\n\n";
                    cout<<"A) Inheritance \t\t B) Encapsulation \n";
                    cout<<"C) Abstraction  \t D) Polymorphism\n\n";
                    cout<<"Enter option: ";
                    cin>>option;
                    if(option=='C' || option=='c')
                    {
                        cout<<"\nCorrect Answer\n";
                        count1++;
                        balance = balance + 1000;
                    }
                    else
                    {
                        cout<<"\nWrong Answer!"<<endl;
                        count2++;
                        cout<<"\n\t========= Game Over ========= \t"<<"\n\n";
                        cout<<"Number correct Answer : "<<count1<<"\n";
                        cout<<"Number wrong Answer : "<<count2<<"\n";
                        cout<<"Your Balance : "<<balance<<"\n";
                        attempt++;
                        if(attempt == 1)
                            return 0;
                        else
                        {
                            cout<<"Enter 1 to continue and 0 to exit: ";
                            cin>>flag;
                        }
                    }

                    cout<<"\n\n\n";
                break;
        }
    }while(flag);
}
