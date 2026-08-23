#include <iostream>
using namespace std;
struct student {
    char name[50];
    int roll;
    int correct = 0;
    int wrong = 0;
};
struct student s[108];
int count = 0;
void start()
{
    cout<<"========= Welcome To Quiz Game ========= "<<"\n\n";
    cout<<"Options Are : "<<"\n";
    cout<<"1) Number Questions"<<"\n";
    cout<<"2) Game Rules"<<"\n";
    cout<<"3) Start Game"<<"\n";
    cout<<"4) View result"<<"\n\n";
}
void number()
{
    cout<<"Number of Question : "<<20<<endl;
}
void rules()
{
    cout<<"1. When we ask the question and you reply\ncorrect answer then you won visiual money\n";
    cout<<"2. There are three stages of question from(1-5),\nfrom(6-10),from(10-15) and 16,17\n";
    cout<<"3. There are 16 and 17 number of question is jackpot\nquestions which give you crores of visiual money\n";
    cout<<"4. There are three safety Levels that is on 5 question for 5,000 Rs\n and 10 question for 1,32,000 Rs\n";
    cout<<"5. When you answered wrong then you can be automatically exit\n from the game and you won the \n";
}
void question(int index)
{
    char option;

    cout<<"1) Which SQL command is used to retrieve data from a database?\n\n";
    cout<<"A) Insert\tB) Update\n";
    cout<<"C) Select\tD) Delete\n\n";
    cout<<"Enter option: ";
    cin>>option;
    if(option=='C' || option=='c')
    {
        printf("Correct Answer!\n\n");
        s[index].correct++;
    }
    else
    {
        cout<<"Wrong Answer!\n\n"<<endl;
        s[index].wrong++;
    }

    cout<<"2) Which data structure follows the FIFO principle?\n\n";
    cout<<"A) Stack \t B) Queue \n";
    cout<<"C) Tree \t D) Graph\n\n";
    cout<<"Enter option: ";
    cin>>option;
    if(option=='B' || option=='b')
    {
        printf("Correct Answer!\n\n");
        s[index].correct++;
    }
    else
    {
        cout<<"Wrong Answer!\n\n"<<endl;
        s[index].wrong++;
    }

    cout<<"3) Which OOP concept hides internal implementation details from the user?\n\n";
    cout<<"A) Inheritance \t\t B) Encapsulation \n";
    cout<<"C) Abstraction  \t D) Polymorphism\n\n";
    cout<<"Enter option: ";
    cin>>option;
    if(option=='C' || option=='c')
    {
        printf("Correct Answer!\n\n");
        s[index].correct++;
    }
    else
    {
        cout<<"Wrong Answer!\n\n"<<endl;
        s[index].wrong++;
    }
}
void view(int index)
{
    cout<<"\n\n\t\t\t========= Result ========= "<<"\n\n";
    cout<<"Name : "<<s[index].name<<endl;
    cout<<"Roll no: "<<s[index].roll<<endl;
    cout<<"Correct Answer : "<<s[index].correct<<endl;
    cout<<"Wrong Answer : "<<s[index].wrong<<endl;
}
int main()
{
    int flag;
    do {
        int choice;
        start();
        cout<<"Enter your choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1 : number();
                break;
            case 2 : rules();
                break;
            case 3 :
                int roll;
                char name[30];
                cout<<"Enter roll no : ";
                cin>>roll;
                int found = -1;
                for(int i=0;i<count;i++)
                {
                    if(s[i].roll == roll)
                    {
                        found = i;
                        break;
                    }
                }
                if(found != -1)
                {
                    cout<<"Already student is present"<<endl;
                    view(found);
                }
                else
                {
                    s[count].roll = roll;
                    cout<<"Enter a name : ";
                    cin>>s[count].name;
                    s[count].correct = 0;
                    s[count].wrong = 0;
                    cout<<"New Student register:\n";
                    question(count);
                    view(count);
                    count++;
                }
                break;
        }

        cout<<"Enter 1 to continue and 0 to exit : ";
        cin>>flag;
    }while(flag);
}
