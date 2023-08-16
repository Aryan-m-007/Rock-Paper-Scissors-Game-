#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void welcome(){
    cout<<"\nWelcome to Rock, Paper & Scissors Game!!\n";
    cout<<"________________________________________\n";
    cout<<"\nPlease Choose one of the following:\n";
    cout<<"1) Rock\n"<<"2) Paper\n"<<"3) Scissors\n";
}

void play(){
    int user=0;
    cout<<"\nInput = ";
    cin>>user;
    if(user==1)
        cout<<"Player's choice = Rock.";
    else if(user==2)
        cout<<"Player's choice = Paper.";
    else if(user==3)
        cout<<"Player's choice = Scissors.";
    else{ 
        cout<<"Please enter a valid input."; 
    }
    
    srand(time(0));
    
    int cpu = rand()%3+1;
    if(cpu==1)
        cout<<"\nComputer's choice = Rock.";
    else if(cpu==2)
        cout<<"\nComputer's choice = Paper.";
    else if(cpu==3)
        cout<<"\nComputer's choice = Scissors.";

cout<<endl<<endl;

if(user==cpu){
    cout<<"It's a Tie.";
}        
else if (user == 1 && cpu == 2) {
    cout<<"CPU Wins!!";
    }
else if (user == 1 && cpu == 3) {
    cout<<"Player Wins!!";
    }

else if (user == 2 && cpu == 3) {
    cout<<"CPU Wins!!";
    }
else if (user == 2 && cpu == 1) {
    cout<<"Player Wins!!";
    }

else if (user == 3 && cpu == 1) {
    cout<<"CPU Wins!!";
    }
else if (user == 3 && cpu == 2) {
    cout<<"Player Wins!!";
    }
}


int main()
{
    welcome();
    play();
    return 0;
}