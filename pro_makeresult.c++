#include<bits\stdc++.h>
#include<string>
#include<math.h>
#include<math.h>

using namespace std;

class data_type {

    private:
    string board_name,name,father_name,year,school_name,rollnumber,standrad,subject_count;
    string sub1,sub2,sub3,sub4,sub5,sub6;
    string yes;
    int subject1,subject2,subject3,subject4,subject5,subject6=0;
    int obtained_marks;

    public:
    friend class enter_base_data;
    friend class enter_subject_marks;
    friend class calculate_marks;
    friend class final_result;

};

class enter_base_data {

    public:
    void base_data (data_type &dt) {

        cout<<"Fill Up the form to get your result." <<endl <<endl;


        cout<<"Enter your board (Full name) : ";
        getline(cin,dt.board_name);
        cout<<endl;


        cout<<" <------ Enter Your Data ------> " <<endl<<endl;

        cout<<"Enter your name : ";
        getline(cin,dt.name);

        cout<<"Enter your father's name : ";
        getline(cin,dt.father_name);

        cout<<"Enter academic year : ";
        getline(cin,dt.year);

        cout<<"Enter school name  : ";
        getline(cin,dt.school_name); 

        cout<<"Enter your roll number : ";
        getline(cin,dt.rollnumber);

        cout<<endl;

    }

    public:
    friend class enter_subject_marks;
    friend class final_result ;
    
};

class enter_subject_marks : public data_type  {
    
    public:
    void enter_marks(data_type &dt) {

        cout<<" " <<endl;
        cout<<"< -- Enter your best of 5 subjects name & marks -- > ";
        cout<<endl<<endl;

        cout<<" <-- First Language --> " <<endl <<endl;
        cout<<"Enter 1st subject name : ";
        getline(cin,dt.sub1);
        cout<<"Enter marks : ";
        cin>>dt.subject1;

        cin.ignore();
        cout<<endl;

        cout<<" <-- Second Language --> " <<endl <<endl;
        cout<<"Enter 2nd subject name : ";
        getline(cin,dt.sub2);
        cout<<"Enter marks : ";
        cin>>dt.subject2;

        cin.ignore();
        cout<<endl;

        cout<<" <-- Other Subjects --> " <<endl <<endl;
        cout<<"Enter 3rd subject name : ";
        getline(cin,dt.sub3);
        cout<<"Enter marks : ";
        cin>>dt.subject3;

        cin.ignore();
        cout<<endl;

        cout<<"Enter 4th subject name : ";
        getline(cin,dt.sub4);
        cout<<"Enter marks : ";
        cin>>dt.subject4;

        cin.ignore();
        cout<<endl;

        cout<<"Enter 5th subject name : ";
        getline(cin,dt.sub5);
        cout<<"Enter marks : ";
        cin>>dt.subject5;

        cin.ignore();
        cout<<endl<<endl;


        cout<<"< -- Enter your optional subject name & marks -- > " <<endl;
        cout<<"Note : If you have any optional subject just type YES or yes & dont have then type NO or no ";
        cout<<endl<<endl;

        while (true) {

        cout<<"You have any optional subject : ";
        cin>>dt.yes;

        cin.ignore();
        cout<<endl<<endl;

        if (dt.yes=="YES" || dt.yes=="yes" ) {
        
        cout<<" <-- Optional Subject --> " <<endl <<endl;    
        cout<<"Enter subject name : ";
        getline(cin,dt.sub6);
        cout<<"Enter marks : ";
        cin>>dt.subject6;
        break;

        cout<<endl;

        }

        else if (dt.yes=="NO" || dt.yes=="no") 
        {
            break;
        }

        else if (dt.yes!="YES" || dt.yes!="yes")

        {
            cout<<"Enter Valid Option ." <<endl; 
        }
      }
      cout<<endl<<endl<<endl;
    }
};

class final_result : public data_type {

    public:
    void result(data_type &dt) {

        cout<< " <<-------------- Marksheet of Board -------------->> " <<endl <<endl;

        cout<<" " <<dt.board_name;
        cout<<endl<<endl;

        cout<<" --> Name : " <<dt.name <<endl;
        cout<<" --> Father's name : " <<dt.father_name <<endl;
        cout<<" --> Academic year : " <<dt.year <<endl;
        cout<<" --> School : " <<dt.school_name <<endl;
        cout<<" --> Roll Number :" <<dt.rollnumber <<endl;
    

        cout<<endl;
        cout<<" <<------ Marks ------>> ";
        cout<<endl<<endl;


        cout<<" --> ";
        cout<< dt.sub1;
        cout<<" : ";
        cout<<dt.subject1;
        cout<<" out of 100 .";
        cout<<endl;
        
        cout<<" --> ";
        cout<<dt.sub2;
        cout<<" : ";
        cout<<dt.subject2;
        cout<<" out of 100 .";
        cout<<endl;

        cout<<" --> ";
        cout<<dt.sub3;
        cout<<" : ";
        cout<<dt.subject3;
        cout<<" out of 100 .";
        cout<<endl;

        cout<<" --> ";
        cout<<dt.sub4;
        cout<<" : ";
        cout<<dt.subject4;
        cout<<" out of 100 .";
        cout<<endl;

        cout<<" --> ";
        cout<<dt.sub5;
        cout<<" : ";
        cout<<dt.subject5;
        cout<<" out of 100 .";
        cout<<endl;

        
        if (dt.yes=="YES" && dt.yes=="yes" ) {

        cout<<" --> ";
        cout<<dt.sub6;
        cout<<" : ";
        cout<<dt.subject6;
        cout<<" out of 100 .";

        }
        
        cout<<endl;

        {
            cout<<" --> Total Marks : ";
            dt.obtained_marks = dt.subject1+dt.subject2+dt.subject3+dt.subject4+dt.subject5;
            cout<<dt.obtained_marks;
            cout<<" out of 500 .";
            cout<<endl;
        }

        {
            cout<<" --> Percentage : ";
            float percentage = (dt.obtained_marks/500.0f)*100;
            cout<<percentage<<"%";
            cout<<endl;
        }

        {
            if (dt.obtained_marks >=450 && dt.obtained_marks <= 500 )
            {
                cout<<" --> Grade : O " <<endl;
                cout<<endl;
            }
            else if (dt.obtained_marks >=400 && dt.obtained_marks <=449)
            {
                cout<<" --> Grade : A+ " <<endl;
                cout<<endl;
            }
            else if (dt.obtained_marks >=350 && dt.obtained_marks <=399)
            {
                cout<<" --> Grade : A " <<endl;
                cout<<endl;
            }
            else if (dt.obtained_marks >=300 && dt.obtained_marks <=349)
            {
                cout<<" --> Grade : B+ " <<endl;
                cout<<endl;
            }
            else if (dt.obtained_marks >=250 && dt.obtained_marks <=299)
            {
                cout<<" --> Grade : B " <<endl;
                cout<<endl;
            }
            else if (dt.obtained_marks >=200 && dt.obtained_marks <=249)
            {
                cout<<" --> Grade : C " <<endl;
                cout<<endl;
            }
            else 
            {
                cout<<" --> Grade : D ";
                cout<<endl;
            }
        }

        {
            if (dt.obtained_marks>150) 
            {
                cout<<" --> Status : Pass " <<endl;
                cout<<endl;
            }
            else
            {
                cout<<" --> status : Fail " <<endl;
                cout<<endl;
            }
        }
    }
};

int main () {

    data_type dt;
    enter_base_data ed;
    enter_subject_marks esb;
    final_result fr;

    ed.base_data (dt);
    esb.enter_marks(dt);
    fr.result(dt);
}