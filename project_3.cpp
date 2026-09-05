#include<iostream>
using namespace std;
class quiz
{
    int correct=0,wrong=0;
    char name[50];

    public:
        int roll;
    void start()
    {
        cout<<"\n\t\t\t========= Welcome To Quiz Game ========= "<<"\n\n";
        cout<<"Options Are : "<<"\n";
        cout<<"1) Number Questions"<<"\n";
        cout<<"2) Game Rules"<<"\n";
        cout<<"3) Start Game"<<"\n";
        cout<<"4) View result"<<"\n";
        cout<<"5) Exit "<<"\n\n";
    }
    void number()
    {
        cout<<"Number of Question : "<<20<<endl;
    }
    void rules()
    {
        cout<<"\n\t1. When we ask the question and you reply correct\n\t answer then you won visiual money\n\n";
        cout<<"\t2. There are three stages of question from(1-5),\n\tfrom(6-10),from(10-15) and 16,17\n\n";
        cout<<"\t3. There are 16 and 17 number of question is jackpot\n\tquestions which give you crores of visiual money\n\n";
        cout<<"\t4. There are three safety Levels that is on 5 question\n\t for 5,000 Rs and 10 question for 1,32,000 Rs\n\n";
        cout<<"\t5. When you answered wrong then you can be automatically\n\t exit from the game and you won the \n\n";
    }
    void question()
    {
            char option=0;
            correct =0;
            wrong=0;
            cout << "\n";
            cout<<"1) Which is the capital city of Maharashtra?\n";
            cout<<"A) Pune   \tB) Mumbai "<<endl;
            cout<<"C) Nagpur \tD) Nashik "<<endl;

            cout<<"Enter option: ";
            cin>>option;
            if(option=='B' || option=='b')
            {
                cout<<"+-----------------+\n";
                cout<<"| Correct Answer! |\n";
                cout<<"+-----------------+\n\n";
                correct++;
            }
            else
            {
                cout<<"+-----------------+\n";
                cout<<"|  Wrong Answer!  |\n";
                cout<<"+-----------------+\n\n";
                wrong++;
            }

            cout<<"2) Which city is known as the cultural capital of Maharashtra?\n\n";
            cout<<"A) Pune    \tB) Nashik \n";
            cout<<"C) Kolhapur\tD) Aurangabad\n\n";
            cout<<"Enter option: ";
            cin>>option;
            if(option=='A' || option=='a')
            {
                cout<<"+-----------------+\n";
                cout<<"| Correct Answer! |\n";
                cout<<"+-----------------+\n\n";
                correct++;
            }
            else
            {
                cout<<"+-----------------+\n";
                cout<<"|  Wrong Answer!  |\n";
                cout<<"+-----------------+\n\n";
                wrong++;
            }

            cout<<"3) Which UNESCO World Heritage site consists of Buddhist, Hindu and Jain rock-cut caves in Maharashtra?\n\n";
            cout<<"A) Ajanta Caves   \tB) Ellora Caves\n";
            cout<<"C) Elephanta Caves\tD) Karla Caves\n\n";
            cout<<"Enter option: ";
            cin>>option;
            if(option=='B' || option=='b')
            {
                cout<<"+-----------------+\n";
                cout<<"| Correct Answer! |\n";
                cout<<"+-----------------+\n\n";
                correct++;
            }
            else
            {
                cout<<"+-----------------+\n";
                cout<<"|  Wrong Answer!  |\n";
                cout<<"+-----------------+\n\n";
                wrong++;
            }

            cout<<"4) Which sanctuary is famous for the Indian bison (Gaur) in Maharashtra?\n\n";
            cout<<"A) Radhanagari Wildlife Sanctuary\tB) Karnala Wildlife Sanctuary\n";
            cout<<"C) Nandur Madhameshwar           \tD) Phansad Wildlife Sanctuary\n\n";
            cout<<"Enter option: ";
            cin>>option;
            if(option=='A' || option=='a')
            {
                cout<<"+-----------------+\n";
                cout<<"| Correct Answer! |\n";
                cout<<"+-----------------+\n\n";
                correct++;
            }
            else
            {
                cout<<"+-----------------+\n";
                cout<<"|  Wrong Answer!  |\n";
                cout<<"+-----------------+\n\n";
                wrong++;
            }

            cout<<"5) Which district is famous for the beaches of Tarkarli?\n\n";
            cout<<"A) Ratnagiri \tB) Sindhudurg\n";
            cout<<"C) Raigad    \tD) Palghar\n\n";
            cout<<"Enter option: ";
            cin>>option;
            if(option=='B' || option=='b')
            {
                cout<<"+-----------------+\n";
                cout<<"| Correct Answer! |\n";
                cout<<"+-----------------+\n\n";
                correct++;
            }
            else
            {
                cout<<"+-----------------+\n";
                cout<<"|  Wrong Answer!  |\n";
                cout<<"+-----------------+\n\n";
                wrong++;
            }

            cout<<"6) Which coastal region of Maharashtra is famous for beaches, forts and seafood?\n\n";
            cout<<"A) Konkan    \tB) Vidarbha\n";
            cout<<"C) Marathwada\tD) Khandesh\n\n";
            cout<<"Enter option: ";
            cin>>option;
            if(option=='A' || option=='a')
            {
                cout<<"+-----------------+\n";
                cout<<"| Correct Answer! |\n";
                cout<<"+-----------------+\n\n";
                correct++;
            }
            else
            {
                cout<<"+-----------------+\n";
                cout<<"|  Wrong Answer!  |\n";
                cout<<"+-----------------+\n\n";
                wrong++;
            }


        cout<<"7) Which river is an important tributary of the Krishna River?\n\n";
            cout<<"A) Bhima  \tB) Tapi\n";
            cout<<"C) Wardha \tD) Purna\n\n";
            cout<<"Enter option: ";
            cin>>option;
            if(option=='A' || option=='a')
            {
                cout<<"+-----------------+\n";
                cout<<"| Correct Answer! |\n";
                cout<<"+-----------------+\n\n";
                correct++;
            }
            else
            {
                cout<<"+-----------------+\n";
                cout<<"|  Wrong Answer!  |\n";
                cout<<"+-----------------+\n\n";
                wrong++;
            }


        cout<<"8) Which river originates near Mahabaleshwar?\n\n";
            cout<<"A) Bhima  \tB) Tapi\n";
            cout<<"C) Wardha \tD) Krishna\n\n";
            cout<<"Enter option: ";
            cin>>option;
            if(option=='D' || option=='d')
            {
                cout<<"+-----------------+\n";
                cout<<"| Correct Answer! |\n";
                cout<<"+-----------------+\n\n";
                correct++;
            }
            else
            {
                cout<<"+-----------------+\n";
                cout<<"|  Wrong Answer!  |\n";
                cout<<"+-----------------+\n\n";
                wrong++;
            }


        cout<<"9) Which is the longest river flowing through Maharashtra?\n\n";
            cout<<"A) Bhima    \tB) Koyana\n";
            cout<<"C) Godavari \tD) Krishna\n\n";
            cout<<"Enter option: ";
            cin >> option;
            if(option=='C' || option=='c')
            {
                cout<<"+-----------------+\n";
                cout<<"| Correct Answer! |\n";
                cout<<"+-----------------+\n";
                correct++;
            }
            else
            {
                cout<<"+-----------------+\n";
                cout<<"|  Wrong Answer!  |\n";
                cout<<"+-----------------+\n\n";
                wrong++;
            }


        cout<<"10) Nagzira Wildlife Sanctuary is located mainly in which region?\n\n";
            cout<<"A) Vidarbha             B) Konkan\n";
            cout<<"C) Western Maharashtra  D) Marathwada\n\n";
            cout<<"Enter option: ";
            cin>>option;
            if(option=='A' || option=='a')
            {
                cout<<"+-----------------+\n";
                cout<<"| Correct Answer! |\n";
                cout<<"+-----------------+\n\n";
                correct++;
            }
            else
            {
                cout<<"+-----------------+\n";
                cout<<"|  Wrong Answer!  |\n";
                cout<<"+-----------------+\n\n";
                wrong++;
            }


        cout<<"11) Which national park is located within Mumbai city?\n\n";
            cout<<"A) Sanjay Gandhi National Park  B) Tadoba National Park\n";
            cout<<"C) Navegaon National Park       D) Gugamal National Park\n\n";
            cout<<"Enter option: ";
            cin>>option;
            if(option=='A' || option=='a')
            {
                cout<<"+-----------------+\n";
                cout<<"| Correct Answer! |\n";
                cout<<"+-----------------+\n\n";
                correct++;
            }
            else
            {
                cout<<"+-----------------+\n";
                cout<<"|  Wrong Answer!  |\n";
                cout<<"+-----------------+\n\n";
                wrong++;
            }


        cout<<"12) Which animal is the main attraction of Tadoba-Andhari Tiger Reserve?\n\n";
            cout<<"A) Lion      \tB) Tiger\n";
            cout<<"C) Rhinoceros\tD) Elephant\n\n";
            cout<<"Enter option: ";
            cin>>option;
            if(option=='B' || option=='b')
            {
                cout<<"+-----------------+\n";
                cout<<"| Correct Answer! |\n";
                cout<<"+-----------------+\n\n";
                correct++;
            }
            else
            {
                cout<<"+-----------------+\n";
                cout<<"|  Wrong Answer!  |\n";
                cout<<"+-----------------+\n\n";
                wrong++;
            }


        cout<<"13) Vajrai Waterfall is located near which famous hill station?\n\n";
            cout<<"A) Mahabaleshwar    B) Matheran\n";
            cout<<"C) Lonavala        D) Chikhaldara\n\n";
            cout<<"Enter option: ";
            cin>>option;
            if(option=='A' || option=='a')
            {
                cout<<"+-----------------+\n";
                cout<<"| Correct Answer! |\n";
                cout<<"+-----------------+\n\n";
                correct++;
            }
            else
            {
                cout<<"+-----------------+\n";
                cout<<"|  Wrong Answer!  |\n";
                cout<<"+-----------------+\n\n";
                wrong++;
            }

        cout<<"14) Which hill station is located near Pune and Mumbai? \n\n";
            cout<<"A) Mahabaleshwar  B) Chikhaldara\n";
            cout<<"C) Lonavala       D) Malshej\n\n";
            cout<<"Enter option: ";
            cin>>option;
            if(option=='C' || option=='c')
            {
                cout<<"+-----------------+\n";
                cout<<"| Correct Answer! |\n";
                cout<<"+-----------------+\n\n";
                correct++;
            }
            else
            {
                cout<<"+-----------------+\n";
                cout<<"|  Wrong Answer!  |\n";
                cout<<"+-----------------+\n";
                wrong++;
            }


        cout<<"15) What is another name for the Western Ghats in Maharashtra? \n\n";
            cout<<"A) Nilgiri\tB) Satpura\n";
            cout<<"C) Vindhya \tD) Sahyadri\n\n";
            cout<<"Enter option: ";
            cin>>option;
            if(option=='D' || option=='d')
            {
                cout<<"+-----------------+\n";
                cout<<"| Correct Answer! |\n";
                cout<<"+-----------------+\n\n";
                correct++;
            }
            else
            {
                cout<<"+-----------------+\n";
                cout<<"|  Wrong Answer!  |\n";
                cout<<"+-----------------+\n\n";
                wrong++;
            }


        cout<<"16) Which fort is associated with Chhatrapati Shivaji Maharaj's birthplace? \n\n";
            cout<<"A) Panhala  \tB) Raigad\n";
            cout<<"C) Pratapgad\tD) Shivneri\n\n";
            cout<<"Enter option: ";
            cin>>option;
            if(option=='D' || option=='d')
            {
                cout<<"+-----------------+\n";
                cout<<"| Correct Answer! |\n";
                cout<<"+-----------------+\n\n";
                correct++;
            }
            else
            {
                cout<<"+-----------------+\n";
                cout<<"|  Wrong Answer!  |\n";
                cout<<"+-----------------+\n\n";
                wrong++;
            }

        cout<<"17) Which village in Maharashtra is known as the “Book Village”? \n\n";
            cout<<"A) Bhilar        B) Matheran\n";
            cout<<"C) Ganpatipule   D) Wai\n\n";
            cout<<"Enter option: ";
            cin>>option;
            if(option=='A' || option=='a')
            {
                cout<<"+-----------------+\n";
                cout<<"| Correct Answer! |\n";
                cout<<"+-----------------+\n\n";
                correct++;
            }
            else
            {
                cout<<"+-----------------+\n";
                cout<<"|  Wrong Answer!  |\n";
                cout<<"+-----------------+\n\n";
                wrong++;
            }

        cout<<"18) What was the original name of Raigad Fort?\n\n";
            cout<<"A) Murumbdev  B) Rajgad\n";
            cout<<"C) Rairi      D) Vishalgad\n\n";
            cout<<"Enter option: ";
            cin>>option;
            if(option=='C' || option=='c')
            {
                cout<<"+-----------------+\n";
                cout<<"| Correct Answer! |\n";
                cout<<"+-----------------+\n\n";
                correct++;
            }
            else
            {
                cout<<"+-----------------+\n";
                cout<<"|  Wrong Answer!  |\n";
                cout<<"+-----------------+\n\n";
                wrong++;
            }

        cout<<"19) Elephanta Caves are located near which city?\n\n";
            cout<<"A) Pune      B) Nagpur\n";
            cout<<"C) Mummbai   D) Sindhudurg\n\n";
            cout<<"Enter option: ";
            cin>>option;
            if(option=='C' || option=='c')
            {
                cout<<"+-----------------+\n";
                cout<<"| Correct Answer! |\n";
                cout<<"+-----------------+\n\n";
                correct++;
            }
            else
            {
                cout<<"+-----------------+\n";
                cout<<"|  Wrong Answer!  |\n";
                cout<<"+-----------------+\n\n";
                wrong++;
            }


        cout<<"20)In which year was including Kaas Plateau (Kas Pathar), inscribed \n";
        cout<<"   as a UNESCO World Heritage Site?\n\n";
            cout<<"A) 2017      B) 1990\n";
            cout<<"C) 2010      D) 2012\n\n";
            cout<<"Enter option: ";
            cin>>option;
            if(option=='D' || option=='d')
            {
                cout<<"+-----------------+\n";
                cout<<"| Correct Answer! |\n";
                cout<<"+-----------------+\n\n";
                correct++;
            }
            else
            {
                cout<<"+-----------------+\n";
                cout<<"|  Wrong Answer!  |\n";
                cout<<"+-----------------+\n";
                wrong++;
            }
    }
    void view()
    {
        cout<<"\t\t+--------------------------------+"<<endl;
        cout<<"\t\t|\tName : "<<name;
        cout<<"\t |"<<endl;
        cout<<"\t\t|\tRoll no: " << roll ;
        cout<<"\t\t |"<<endl;
        cout<<"\t\t|\tCorrect Answer : "<<correct;
        cout<<"\t |"<<endl;
        cout<<"\t\t|\tWrong Answer : "<<wrong;
        cout<<"\t |"<<endl;
        cout<<"\t\t+--------------------------------+\n"<<endl;
    }
    void register_stud()
    {
                cout << "Enter roll no : ";
                cin >> roll;
                cout << "Enter Name : ";
                cin >> name;
                cout << "\n";
                cout << name << " is Registered\n";
                cout << "-----------------------------\n";
    }
};
int main()
{
    quiz q[110];
    int flag=0;
    int found=0;
    int i=0;
    int r;

    do{
        q[i].start();
        int choice;

        cout << "Enter your choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                q[i].number();
                break;

            case 2:
                q[i].rules();
                break;

            case 3:
               // cout <<"Enter Roll No : ";
               // cin >> r;
                q[i].register_stud();
                r=q[i].roll;

                for(int j=0;j<i;j++)
                {
                  if(q[j].roll == r)
                  {
                      q[j].view();
                      found = 1;
                  }

                }
                if(!found)
                {
                    q[i].question();
                    cout<< "\n\t=========== Result ===========\n\n";
                    q[i].view();
                    i++;
                }

                break;
            case 4:
                if(i == 0)
                {
                    cout << "No student is found.." << endl;
                    cout << "Register and Play." << endl;
                }
                else
                {
                    cout<<"\n\n\t\t=========All Student Result ========= "<<"\n\n";
                    for(int j=0;j<i;j++)
                    {
                        q[j].view();
                    }
                }

                break;
            case 5: cout << "Thank You, Visit Again.!\n";
                return 0;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }

        cout << "\nEnter 1 to continue and 0 to exit : ";
        cin >> flag;
    }while(flag);

    cout << "\nThank you for playing!\n";
}
