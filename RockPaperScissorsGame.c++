#include<bits\stdc++.h>
#include<string>
#include <cstdlib>
#include <ctime>  

using namespace std;

class data_type {
    
    private:
    string name;
    string chs,rock,paper,scissor;
    public:
    friend class game;

};

class game : public data_type {

    public:
    void main() {

        cout<<" Enter your name : ";
        getline(cin,name);

        cout<<endl<<endl;

        while(true) 

        {

        cout<<" Choose rock / paper / scissor \n";
        cout<<" Note : If you want leave this game type 'exit' \n";
        cout<<" " <<name <<" Your Choice : ";
        getline(cin,chs);

        if ( chs=="exit") {
            break;
        }

        else if ( chs == "rock" || chs == "paper" || chs == "scissor" ) {


            srand(time(0)); 
            int random_number = rand() % 3;
    
        if (random_number==0) {

            cout<<" Computer choose : rock ";
            cout<<endl<<endl;
        }
        else if (random_number==1) {
            paper=random_number;
            cout<<" Computer choose : paper ";
            cout<<endl<<endl;
        }
        else if (random_number==2) {
            scissor=random_number;
            cout<<" Computer choose : scissor ";
            cout<<endl<<endl;
        }
    

        if ( chs=="rock" && random_number==0 ) {

            cout<<" Match Tie " <<endl;
            cout<<" Oops " <<name <<" try again " <<endl <<endl <<endl ;
        }

        else if ( chs=="rock" && random_number==1 ) {

            cout<<" Computer Win " <<endl;
            cout<<" Better luck next time " <<name <<endl <<endl <<endl ;
        }

        else if ( chs=="rock" && random_number==2 ) {

            cout<<" You Win " <<endl ;
            cout<<" Congratulation " <<name  <<endl <<endl <<endl ;
        }

        if ( chs=="paper" && random_number==0 ) {

            cout<<" You Win " <<endl ;
            cout<<" Congratulation " <<name  <<endl <<endl <<endl ;
        }

        else if ( chs=="paper" && random_number==1 ) {

            cout<<" Match Tie " <<endl;
            cout<<" Oops " <<name <<" try again " <<endl <<endl <<endl ;
        }

        else if ( chs=="paper" && random_number==2 ) {

            cout<<" Computer win " <<endl ;
            cout<<" Better luck next time " <<name <<endl <<endl <<endl ;
        }

        if ( chs=="scissor" && random_number==0 ) {

            cout<<" Computer Win " <<endl;
            cout<<" Better luck next time " <<name <<endl <<endl <<endl ;
        }

        else if ( chs=="scissor" && random_number==1 ) {

            cout<<" You Win " <<endl ;
            cout<<" Congratulation " <<name  <<endl <<endl <<endl ;
        }

        else if ( chs=="scissor" && random_number==2 ) {

            cout<<" Match Tie " <<endl;
            cout<<" Oops " <<name <<" try again " <<endl <<endl <<endl ;
        }
      }

      else {

        cout<<" Enter valid option " <<endl <<endl <<endl ;

      }
      
     }
    }
};

int main() {

    data_type dt;
    game g;

    g.main();
}
