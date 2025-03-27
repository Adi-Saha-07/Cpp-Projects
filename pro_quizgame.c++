#include<bits/stdc++.h>
#include<string>
#include<math.h>
using namespace std;


class data_type {

    private:
    string name,phone;
    string ans1,ans2,ans3,ans4,ans5;
    string a,b,c,d;
    int TS=0;
    int number1=0;
    int number2=0;
    int number3=0;
    int number4=0;
    public:
    friend class computer_science;
    friend class digital_electronics ;
    friend class mathematics_II ;
    friend class soft_skill ;
    friend class final_score;
    friend class name_phone;
    friend class final_certificate;

};
class name_phone {

    public:
    void n_p(data_type &dt) {

    cout<<"<--------------Quiz Game------------->";
    cout<<endl<<endl;

    cout<<"Enter your name :";
    getline(cin,dt.name);

    cout<<"Enter your ph number :";
    getline(cin,dt.phone);

    }
};
class computer_science {

    public:
    void question_paper1(data_type &dt) { 

        cout<<endl <<endl;
        cout<<"<-------------Computer Science (MCQ)------------->" <<endl <<endl; 

        cout<<"1. Who developed C++ ?" <<endl;
        cout<<"a.Rahul Kumar gupta.\nb.Bjarne Stroustrup.\nc.Devid Jsn.\nd.Henry Wilson."<<endl <<endl;
        cout<<"answewr :";
        getline(cin,dt.ans1);

        if (dt.ans1=="b") {

        cout<<"Correct answer." <<endl; 
        dt.number1+=1; 
        
        } 

        else {
        cout<<"Wrong answer." <<endl; 
        cout<<"Correct answer : b.Bjarne Stroustrup." <<endl;
        }

        cout<<endl;

        cout<<"2. What is full form of OOPS ?" <<endl;
        cout<<"a.Object Oriented Programming.\nb.Operating Operation Programming\nc.Optical Operationg System\nd.Oriented Operating System" <<endl <<endl;
        cout<<"answewr :";
        getline(cin,dt.ans2);
        
        if (dt.ans2=="a") {

        cout<<"Correct answer" <<endl; 
        dt.number1+=1; 
            
        } 
    
        else {
        cout<<"Wrong answer." <<endl; 
        cout<<"Correct answer : a.Object Oriented Programming." <<endl;
        }

        cout<<endl;

        cout<<"3.What is the right syntax ?" <<endl;
        cout<<"a.cout<<'a+b';\nb.cout>>a+b;\nc.cout<<a+b\nd.cout<<a+b;" <<endl <<endl;
        cout<<"answewr :" ;
        getline(cin,dt.ans3);

        if (dt.ans3=="d") {

        cout<<"Correct answer." <<endl; 
        dt.number1+=1; 
        
        } 

        else {
        cout<<"Wrong answer." <<endl; 
        cout<<"Correct answer : d.cout<<a+b;" <<endl;
        }

        cout<<endl;

        cout<<"4.What is file extention of C++ ?" <<endl;
        cout<<"a.cpp\nb.c++\nc.cc\nd.all are correct" <<endl <<endl;
        cout<<"answewr :" ;
        getline(cin,dt.ans4);

        if (dt.ans4=="d") {

        cout<<"Correct answer." <<endl; 
        dt.number1+=1; 
    
        } 
    
        else {
        cout<<"Wrong answer." <<endl;
        cout<<"Correct answer : d.cout<<a+b;" <<endl;
        }                                                     

        cout<<endl;

        cout<<"5.Which is not datatype ?" <<endl;
        cout<<"a.int\nb.bool\nc.class\nd.char" <<endl <<endl;
        cout<<"answewr :" ;
        getline(cin,dt.ans5);

        if (dt.ans5=="c") {

        cout<<"Correct answer." <<endl; 
        dt.number1+=1; 
            
        } 
    
        else {  
        cout<<"Wrong answer." <<endl; ;
        cout<<"Correct answer : c.class" <<endl;
        }

        cout<<endl;

    }

    public:
    friend class final_score;
    friend class digital_electronics ;
    friend class mathematics_II ;
    friend class soft_skill ;

};
class digital_electronics {

    public:
    void question_paper2 (data_type &dt) {

        cout<<endl <<endl;
        cout<<"<-------------Dgital Eectronics (MCQ)------------->" <<endl <<endl; 

        cout<<"1.What is base of decimal number ?" <<endl;
        cout<<"a.2\nb.8\nc.10\nd.16"<<endl <<endl;
        cout<<"answewr :";
        getline(cin,dt.ans1);

        if (dt.ans1=="c") {

        cout<<"Correct answer." <<endl; 
        dt.number2+=1; 
        
        } 

        else  {
        cout<<"Wrong answer." <<endl; 
        cout<<"Correct answer : c.10" <<endl;
        }

        cout<<endl;

        cout<<"2. What is base of binary number ?" <<endl;
        cout<<"a.2\nb.5\nc.1\nd.2.5" <<endl <<endl;
        cout<<"answewr :";
        getline(cin,dt.ans2);
        
        if (dt.ans2=="a") {

        cout<<"Correct answer" <<endl; 
        dt.number2+=1; 
            
        } 
    
        else {
        cout<<"Wrong answer." <<endl; 
        cout<<"Correct answer : a.2" <<endl;
        }
 
        cout<<endl;

        cout<<"3.(2)10 = (?)2 " <<endl;
        cout<<"a.20\nb.0\nc.10\nd.02" <<endl <<endl;
        cout<<"answewr :" ;
        getline(cin,dt.ans3);

        if (dt.ans3=="c") {

        cout<<"Correct answer." <<endl; 
        dt.number2+=1; 
        
        }

        else {
        cout<<"Wrong answer." <<endl; 
        cout<<"Correct answer : c.10" <<endl;
        }

        cout<<endl;

        cout<<"4.In Hexa-decimal 12 represent by which character ?" <<endl;
        cout<<"a.A\nb.C\nc.D\nd.F" <<endl <<endl;
        cout<<"answewr :" ;
        getline(cin,dt.ans4);

        if (dt.ans4=="b") {

        cout<<"Correct answer." <<endl; 
        dt.number2+=1; 
    
        } 
    
        else {
        cout<<"Wrong answer." <<endl; 
        cout<<"Correct answer : b.C" <<endl;
        }

        cout<<endl;

        cout<<"5.which is correct ?" <<endl;
        cout<<"a.(10)2\nb.(A)2\nc.(8)8\nd.(F)16" <<endl <<endl;
        cout<<"answewr :" ;
        getline(cin,dt.ans5);

        if (dt.ans5=="d") {

        cout<<"Correct answer." <<endl; 
        dt.number2+=1; 
            
        } 
    
        else {
        cout<<"Wrong answer." <<endl; ;
        cout<<"Correct answer : d.(F)16" <<endl;
        }

        cout<<endl;

    }

    public:
    friend class final_score;
    friend class computer_science ;
    friend class mathematics_II ;
    friend class soft_skill ;

};
class mathematics_II {

    public:
    void question_paper3 (data_type &dt) {
        
        cout<<endl <<endl;
        cout<<"<-------------Mathematics_II (MCQ)------------->" <<endl <<endl;

        cout<<"1.How many elements in the power set of S , which have 6 elements ?" <<endl;
        cout<<"a.20\nb.64\nc.36\nd.46"<<endl <<endl;
        cout<<"answewr :";
        getline(cin,dt.ans1);

        if (dt.ans1=="b") {

        cout<<"Correct answer." <<endl; 
        dt.number3+=1; 
        
        } 

        else {
        cout<<"Wrong answer." <<endl; 
        cout<<"Correct answer : b.64" <<endl;
        }

        cout<<endl;

        cout<<"2.A={a,b,c}\nR={(a,a) (b,b) (c,c)\nIt is __________ relation." <<endl;
        cout<<"a.Symmetric.\nb.Equivalence.\nc.Reflexive.\nd.Non of the optiions." <<endl <<endl;
        cout<<"answewr :";
        getline(cin,dt.ans2);
        
        if (dt.ans2=="c") {

        cout<<"Correct answer" <<endl; 
        dt.number3+=1; 
            
        } 
    
        else {
        cout<<"Wrong answer." <<endl;
        cout<<"Correct answer : c.Reflexive." <<endl; 
        }

        cout<<endl;

        cout<<"3.A graph consists of which two main components?" <<endl;
        cout<<"a.Nodes and Trees.\nb.Vertices and Edges.\nc.Points and Lines.\nd.None of the above." <<endl <<endl;
        cout<<"answewr :" ;
        getline(cin,dt.ans3);

        if (dt.ans3=="b") {

        cout<<"Correct answer." <<endl; 
        dt.number3+=1; 
        
        }

        else {
        cout<<"Wrong answer." <<endl; 
        cout<<"Correct answer : b.Vertices and Edges." <<endl;
        }

        cout<<endl;

        cout<<"4.Which Boolean law states that A + A = A ?" <<endl;
        cout<<"a.Idempotent Law.\nb.Complement Law.\nc.Identity Law.\nd.Distributive Law" <<endl <<endl;
        cout<<"answewr :" ;
        getline(cin,dt.ans4);

        if (dt.ans4=="a") {

        cout<<"Correct answer." <<endl; 
        dt.number3+=1; 
    
        } 
    
        else {
        cout<<"Wrong answer." <<endl; 
        cout<<"Correct answer : a.Idempotent Law" <<endl;
        }

        cout<<endl;

        cout<<"5.What is the result of A + 1 in Boolean algebra?" <<endl;
        cout<<"a.A\nb.0\nc.A'\nd.1" <<endl <<endl;
        cout<<"answewr :" ;
        getline(cin,dt.ans5);

        if (dt.ans5=="d") {

        cout<<"Correct answer." <<endl; 
        dt.number3+=1; 
            
        } 
    
        else { 
        cout<<"Wrong answer." <<endl;
        cout<<"Correct answer : d.1" <<endl;
        }

        cout<<endl;

    }

    public:
    friend class final_score;
    friend class computer_science ;
    friend class digital_electronics ;
    friend class soft_skill ;

};
class soft_skill {

    public:
    void question_paper4 (data_type) {

        cout<<endl <<endl;
        cout<<"<-------------Soft_Skill (MCQ)------------->" <<endl <<endl;
        cout<<"Sorry this paper is not available for now. Thank You .";
        cout<<endl<<endl<<endl;
        
    }
    public:
    friend class final_score;
    friend class computer_science ;
    friend class digital_electronics ;
    friend class mathematics_II ;
};

class final_score {

    public:
    void exam_score(data_type &dt) {

    cout<<endl;

    cout<<"<-------------Final Result------------->" <<endl <<endl;

    {
    cout<<"--> Your Computer Science score " <<dt.number1 ; cout<<" out of 5." <<endl;
    cout<<"--> Your Digital Electronics score " <<dt.number2 ; cout<<" out of 5." <<endl; 
    cout<<"--> Your mathematics_II score " <<dt.number3 ; cout<<" out of 5." <<endl; 
    } 

    cout<<endl<<endl;

    {

    cout<<"--> ";
    cout<< dt.name;
    cout<<" your total Score is " <<dt.number1+dt.number2+dt.number3 ; cout<<" out of 15 ." <<endl;

    }

    {
        dt.TS=dt.number1+dt.number2+dt.number3;
    }

    if (dt.TS == 15 )
    {
        cout<<"--> Your grade AA." <<endl;
        cout<<"--> Outstanding Perfomence" <<dt.name <<endl <<endl;
    }
    else if (dt.TS == 13 || dt.TS == 14 )
    {
        cout<<"--> Your grade is A+." <<endl;
        cout<<"--> Exelent " <<dt.name <<endl <<endl;
    }
    else if (dt.TS == 11 || dt.TS == 12 )
    {
        cout<<"--> Your grade is A." <<endl;
        cout<<"--> Very Good " <<dt.name <<endl <<endl;
    }
    else if (dt.TS == 9 || dt.TS == 10 )
    {
        cout<<"--> Your grade is B+."<<endl;
        cout<<"--> Good " <<dt.name <<endl <<endl;
    }
    else if (dt.TS == 7 || dt.TS == 8 )
    {
        cout<<"--> Not bad "<<endl;
        cout<<"--> Utna bhi acha nehi " <<dt.name <<endl <<endl ;
    }
    else if (dt.TS == 5 || dt.TS == 6 )
    {
        cout<<"--> Very bad " <<endl;
        cout<<"--> Padhai karle thoda " <<dt.name <<endl <<endl ;
    }
    else
    {
        cout<<"You are failed."<<endl;
        cout<<"--> Terese padhai nehi ho payega " <<dt.name <<endl <<endl ;
    }
  }
};

class final_certificate {

    public:

    void result(data_type &dt) {

    cout<<"<--------------- Certificate --------------->" <<endl <<endl;
    cout<<"Student Name : " <<dt.name <<endl;
    cout<<"Student's Ph number : " <<dt.phone <<endl <<endl;

    cout<<"1. Computer Science : " <<dt.number1 <<endl;
    cout<<"2. Digital Electronics : " <<dt.number2 <<endl;
    cout<<"3. Mathematics_II : " <<dt.number3 <<endl <<endl;

    cout<<"Total Score : " <<dt.TS <<endl;

    cout<<endl;
    cout<<"Exam khatam bhai tu ghar ja..... Bye Bye.";
    cout<<endl;

    }
};
  
int main() {
    data_type dt;
    name_phone np;
    computer_science cs;
    digital_electronics de;
    mathematics_II MII; 
    soft_skill ss;
    final_score fs;
    final_certificate fc;

    np.n_p(dt);
    cs.question_paper1(dt);
    de.question_paper2(dt);
    MII.question_paper3(dt);
    ss.question_paper4(dt);
    fs.exam_score(dt);
    fc.result(dt);
    return 0;
}
