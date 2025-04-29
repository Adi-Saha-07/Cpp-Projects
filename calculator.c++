#include<iostream>
using namespace std;
 class a {
        
        private:
        int num1 , num2;
        int sum , sub , mul ,div;
        int operation ;

        friend class b;
 };

 class b {

    public:
    void bb(a &aa) {


        cout<<"Enter the first number :"; 
        cin>>aa.num1;
        cout<<"Enter the second number :"; 
        cin>>aa.num2;
        cout<<"Chose Your operation\n (1=sum , 2=sub , 3=mul , 4=div ) :";
        cin>>aa.operation;


        if (aa.operation == 1|| aa.operation==2|| aa.operation==3|| aa.operation==4 )
    {
        switch(aa.operation) 
    {
        case 1:
        aa.sum=aa.num1+aa.num2;
        cout<<"The sum of 2 number is :" <<aa.sum;
        break;
        case 2:
        aa.sub=aa.num1-aa.num2;
        cout<<"The subtraction of 2 number is :" <<aa.sub;
        break;
        case 3:
        aa.mul=aa.num1*aa.num2;
        cout<<"The multiplication of 2 number is :" <<aa.mul;
        break;
        case 4:
        aa.div=aa.num1/aa.num2;
        cout<<"The divition of 2 number is :" <<aa.div;
        break;
    }  
    }
    else 
    {
        cout<<"Enter the valid operation";
    }
  }
};

int main () {

    a aa;
    b bbb;
    bbb.bb(aa);
}
