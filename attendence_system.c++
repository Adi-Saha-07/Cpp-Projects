#include<bits/stdc++.h>
#include<string>
#include<math.h>

using namespace std;

class data_type {

    private:
    int present=0;
    string attend[100];
    string course,date,start_time,end_time,group;
    public:
    friend class attendence;
};

class attendence : public data_type {

    public:
    void atd() {

        cout<<" Class Attendence " <<endl <<endl;

        cout<<" Enter course : ";
        getline(cin,course);
        cout<<" Enter date : ";
        getline(cin,date);
        cout<<" Enter start-time : ";
        getline(cin,start_time);
        cout<<" Enter end-time : ";
        getline(cin,end_time);

        while(true) {
        cout<<" Enter group (a1/a2/a3/a4/all) : ";
        getline(cin,group);

        if (group=="a1" || group=="a2" || group=="a3" || group=="a4" || group=="all")

        {
            cout<<endl;

            if(group=="a1")
    
            {
                const int totalStudents1 = 30;
                string attend[totalStudents1 + 1]; 
    
                cout<<" Group A1 " <<endl<<endl;
                for (int i = 1 ; i <= totalStudents1; i++)
                {
                    cout<<" roll number " <<i <<" (P/A) : ";
                    getline(cin,attend[i]);
    
                    if ( attend[i]=="P" || attend[i]=="p" )
                    {
                        present+=1;
                    }
                }
    
                cout<<endl<<endl;
                cout << "\nAttendance summary:\n\n";
    
                for (int i = 1 ; i <= totalStudents1; i++) 
                {
                    cout<<" Roll number " <<i <<": " << attend[i];
                    cout<<endl;
                }
                cout<<endl;
                cout<<" Total student presrnt :" <<present;
            }
    
            if(group=="a2")
    
            {
                const int totalStudents2 = 60;
                string attend[totalStudents2 + 1]; 
        
                cout<<" Group A2 " <<endl<<endl;
                for (int i = 31 ; i <= totalStudents2; i++)
                {
                    cout<<" roll number " <<i <<" (P/A) : ";
                    getline(cin,attend[i]);
    
                    if ( attend[i]=="P" || attend[i]=="p" )
                    {
                        present+=1;
                    }
                }
    
                cout<<endl<<endl;
                cout << "\nAttendance summary:\n\n";
    
                for (int i = 31 ; i <= totalStudents2; i++) 
                {
                    cout<<" Roll number " <<i <<": " << attend[i];
                    cout<<endl;
                }
                cout<<endl;
                cout<<" Total student presrnt :" <<present;
            }
    
            if(group=="a3")
    
            {
                const int totalStudents3 = 90;
                string attend[totalStudents3 + 1]; 
    
                cout<<" Group A3 " <<endl<<endl;
                for (int i = 61 ; i <= totalStudents3; i++)
                {
                    cout<<" roll number " <<i <<" (P/A) : ";
                    getline(cin,attend[i]);
    
                    if ( attend[i]=="P" || attend[i]=="p" )
                    {
                        present+=1;
                    }
                }
    
                cout<<endl<<endl;
                cout << "\nAttendance summary:\n\n";
    
                for (int i = 61 ; i <= totalStudents3; i++) 
                {
                    cout<<" Roll number " <<i <<": " << attend[i];
                    cout<<endl;
                }
                cout<<endl;
                cout<<" Total student presrnt :" <<present;
            }
    
            if(group=="a4") 
    
            {
                const int totalStudents4 = 120;
                string attend[totalStudents4 + 1]; 
        
                cout<<" Group A4 " <<endl<<endl;
                for (int i = 91 ; i <= totalStudents4; i++)
                {
                    cout<<" roll number " <<i <<" (P/A) : ";
                    getline(cin,attend[i]);
    
                    if ( attend[i]=="P" || attend[i]=="p" )
                    {
                        present+=1;
                    }
                }
    
                cout<<endl<<endl;
                cout << "\nAttendance summary:\n\n";
    
                for (int i = 91 ; i <= totalStudents4; i++) 
                {
                    cout<<" Roll number " <<i <<": " << attend[i];
                    cout<<endl;
                }
                cout<<endl;
                cout<<" Total student presrnt :" <<present;
            }
    
            if(group=="ALL" || group=="all") 
    
            {
                const int totalStudents5 =120;
                string attend[totalStudents5 + 1]; 
    
                cout<<" Group A3 " <<endl<<endl;
                for (int i = 1 ; i <= totalStudents5; i++)
                {
                    cout<<" roll number " <<i <<" (P/A) : ";
                    getline(cin,attend[i]);
    
                    if ( attend[i]=="P" || attend[i]=="p" )
                    {
                        present+=1;
                    }
                }
    
                cout<<endl<<endl;
                cout << "\nAttendance summary:\n\n";
    
                for (int i = 1 ; i <= totalStudents5; i++) 
                {
                    cout<<" Roll number " <<i <<": " << attend[i];
                    cout<<endl;
                }
    
                cout<<endl;
                cout<<" Total student present : " <<present;
        
            }
            break;
        }

        else 

        {
          cout<<" Enter valid option." <<endl;
        }
      }
    } 
};

int main() {

    data_type dt;
    attendence at;
    at.atd();
}
