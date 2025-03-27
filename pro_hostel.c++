#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long En,ph; //for the taken long number .
    int course,year,room,rn,bn,sem,cc;
    string name1,name2,rm1,rm2,email,x="@gmail.com";


    cout<<"\n1=Add Student.\n2=Update Student details.\n3=exit.\nWhat do you Want :";
    cin>>cc;
    
    switch(cc) //for Switch Opetarion .

    {
        case 1 :

    cout<<"1.Enter your frist name :";
    cin>>name1;
    cout<<"2.Enter your last name :";
    cin>>name2;
    cout<<"3.Enter your En. number :";
    cin>>En;
    cout<<"4.Courses\n1 = B.Tech\n2 = B.C.A\n3 = B.B.A\n4 = M.C.A\n5 = M.B.A\nEnter your course :";
    cin>>course;
    cout<<"5.Enter your course duration:";
    cin>>year;
    cout<<"6.Enter your Semester :";
    cin>>sem;
    cout<<"7.Room Type\n1=AC Double Sharing\n2=AC Tripple Sharing\n3=Non-AC Double Sharing\n4=Non-AC Tripple Sharing\nEnter your room type :";
    cin>>room;
    cout<<"8.Enter your Room Number :";
    cin>>rn;
    cout<<"9.Enter your bed no. :";
    cin>>bn;
    cout<<"10.Enter your first roommate name :";
    cin>>rm1;
    cout<<"11.Enter your second roommate name :";
    cin>>rm2;
    cout<<"12.Enter phone nuumber :";
    cin>>ph;
    cout<<"12.Enter Email i'd ( only type username ) :"; 
    //only write username beacause "@gmail.com" is already define by variable "x" .
    cin>>email;


    cout <<"\n1. Name :" <<name1 <<" " <<name2; //print the first name as well as last name . 
    cout<<"\n2. Enrollment Number :" <<" " <<En;


    if (course==1 || course==2 ||course==3 || course==4 || course==5 )
    {
    switch (course) 
    {
    case 1:
    cout<<"\n3.Course : B.Tech";
    break;
    case 2:
    cout<<"\n3.Course : B.C.A";
    break;
    case 3:
    cout<<"\n3.Course : B.B.A";
    break;
    case 4:
    cout<<"\n3.Course : M.C.A";
    break;
    case 5:
    cout<<"\n3Course : M.B.A";
    break;
    }
    } 
    else
    {
       cout<<"\n3.Course : Enter the valid course"; //for write wrong case this line will be print .
    }


    if (year>3 || year<5) 
    {
        cout<<"\n5.Course Duration :" <<year;
    }
    else 
    {
        cout<<"\n5.Course Duration : Not valid year "; //for write wrong case this line will be print .
    }


    if(sem<=8)
    {
        cout<<"\n6.Current Semester : " <<" " <<sem;
    }
    else 
    {
        cout<<"\n6.Current Semester : Enter valid semester.";
    }


    if (room==1 || room==2 || room==3 || room==4 )
    {
    switch (room)
    {
    case 1:
    cout<<"\n7.Room : AC Double Sharing.";
    break;
    case 2:
    cout<<"\n7.Room : AC Tripple Sharing.";
    break;
    case 3:
    cout<<"\n7.Room : Non-AC Double Sharing.";
    break;
    case 4:
    cout<<"\n7.Room : Non-AC Tripple Sharing.";
    break;
    }
    } 
    else
    {
       cout<<"\n7.Room : This type of rooms are not available."; 
    }


    cout<<"\n8.Bed Number :" <<" " <<bn;
    cout<<"\n9.Firsrt Roommate Name :" <<" " <<rm1;
    cout<<"\n10.Second Roommate Name :" <<" "<<rm2;


    if(ph<=9999999999 || ph>=1000000000 )
    {
        cout<<"\n11.Phone Number :"<<" " <<ph;
    }
    else
    {
        cout<<"\n11.Phone Number : Enter a valid Phone Number.";
    }
    cout<<"\n12.Email I'd :"<<email<<x; //here "x" is already predefine .

    
        
        break;

        case 2:
        cout<<"#";
        break;

        case 3:
        cout<<"exit... the program.";  //this case use for break the program .
    }
    
    return 0;
}



/* OUTPUT :

1=Add Student.
2=Update Student details.
3=exit.
What do you Want :1
1.Enter your frist name :Aditya 
2.Enter your last name :Saha 
3.Enter your En. number :8824209033
4.Courses
1 = B.Tech
2 = B.C.A
3 = B.B.A
4 = M.C.A
5 = M.B.A
Enter your course :2
5.Enter your course duration:4
6.Enter your Semester :2
7.Room Type
1=AC Double Sharing
2=AC Tripple Sharing
3=Non-AC Double Sharing
4=Non-AC Tripple Sharing
Enter your room type :4
8.Enter your Room Number :108
9.Enter your bed no. :1
10.Enter your first roommate name :Naman 
11.Enter your second roommate name :Vikas
12.Enter phone nuumber :8167381643
12.Enter Email i'd ( only type username ) :adityaadisaha07

1. Name :Aditya Saha
2. Enrollment Number : 8824209033
3.Course : B.C.A
5.Course Duration :4
6.Current Semester :  2
7.Room : Non-AC Tripple Sharing.
8.Bed Number : 1
9.Firsrt Roommate Name : Naman
10.Second Roommate Name : Vikas
11.Phone Number : 816738164312.
12.Email I'd :adityaadisaha07@gmail.com

*/