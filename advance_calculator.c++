#include<bits\stdc++.h>
#include<string>
#include<math.h>
#include<cmath>

using namespace std;

class data_type {
    
    public:

    double num1,num2,num3,num4,num5,num6;
    double i=1,element;
    double num[100];
    char operate;
    string y1 ;
    double add=0,sub=0,mul=1,div,mod;
    double power,percentage,square;
    
};

class calculate : public data_type {

    public:
    void calculator() {

        while ( true ) {

        cout<<" __Calculator__ ";
        cout<<endl<<endl;

        cout<<" 1.Addition (+) \n 2.Subtraction (-)  \n 3.Multiplication (*)  \n 4.Division (/)  \n 5.Mod (m)  \n 6.Percentage (%)  \n 7.Power (p)  \n 8.Root (r)  \n 9.Square root (t)  \n 10.Exit (e) ";
        cout<<"\n\n Enter the operation : ";
        cin>>operate;
        cout<<endl;

        if (operate == '+' || operate == '-' ||  operate == '*' || operate == '/' ||  operate == 'm' || operate == '%' ||  operate == 'p' || operate == 'r' || operate == 't' || operate == 'e')

        {

        switch(operate) 
        
        {
            case '+' :

            cout<<" Addition " <<endl;

            cout<<"\n Enter element size : ";
            cin>>element;
            cout<<endl;
    
            cin.ignore();
    
            for (int i = 0; i < element; i++) {
                
                cout <<" Enter number " << i + 1 << " : ";
                cin >> num[i];
                add += num[i];

            }
            
            cout<<"\n The sum of total numbers is = " <<add;
            cout<<endl<<endl;
            break;

            case '-' :

            cout<<" Subtraction " <<endl<<endl;

            cout<<" Enter 1st number : ";
            cin>>num1;
            cout<<" Enter 2nd number : ";
            cin>>num2;

            while ( true ) {
            cout<<"\n Do you want to take more number ( yes / no ) : ";
            cin>>y1;

            if ( y1 == "yes" ) 
            {
                sub=num1-num2;
                cout<<"\n (" <<num1 <<" - " <<num2 <<") = " <<sub ;
                cout<<"\n Enter 3rd number : ";
                cin>>num3;

                sub=num1-num2-num3;

                cout<<"\n The subtraction of {(" <<num1 <<" - " <<num2 <<") - " <<num3 <<"} is = " <<sub;
                cout<<endl<<endl;
                break;
            }

            else if ( y1 == "no" )
            {
                sub=num1-num2;
                cout<<"\n The subtraction of (" <<num1 <<" - " <<num2 <<") is = " <<sub;
                cout<<endl<<endl;
                break;
            }
            else if ( y1 != "yes" || y1 != "no" )
            {
                cout<<"\n Enter Valid Option ." <<endl;
            }
            
          }
          
          break;

          case '*' :

          cout<<" Multiplication " <<endl<<endl;

          cout<<" Enter 1st number : ";
          cin>>num1;
          cout<<" Enter 2nd number : ";
          cin>>num2;
          cin.ignore();

          while ( true ) {
          cout<<"\n Do you take more number ( yes / no ) : ";
          cin>>y1;

          if ( y1 == "yes" ) 
          {

            mul=num1*num2;
            cout<<"\n (" <<num1 <<" * " <<num2 <<") = " <<mul ;
            cout<<"\n Enter 3rd number : ";
            cin>>num3;

            mul=num1*num2*num3;

            cout<<"\n The multiplication of {(" <<num1 <<" * " <<num2 <<") * " <<num3 <<"} is = " <<mul;
            cout<<endl<<endl;
            break;
          }

          else if ( y1 == "no" )
          {
              mul=num1*num2;
              cout<<"\n The multiplication of (" <<num1 <<" * " <<num2 <<") is = " <<mul;
              cout<<endl<<endl;
              break;
          }
          else if ( y1 != "yes" || y1 != "no" )
          {
              cout<<"\n Enter Valid Option ." <<endl;
          }
          }
          break;

          case '/' :

          cout<<" Divition " <<endl<<endl;

          cout<<" Enter 1st number : ";
          cin>>num1;
          cout<<" Enter 2nd number : ";
          cin>>num2;
          cin.ignore();

          div=num1/num2;

          cout<<"\n The division of (" <<num1 <<" / " <<num2 <<") is = " <<div;
          cout<<endl<<endl;
          break;

          case 'm' :

          cout<<" Mod " <<endl<<endl;

          cout<<" Enter 1st number : ";
          cin>>num1;
          cout<<" Enter 2nd number : ";
          cin>>num2;
          cin.ignore();

          mod=fmod(num1,num2);

          cout<<"\n The mod of (" <<num1 <<" % " <<num2 <<") is = " <<mod;
          cout<<endl<<endl;
          break;

          case '%' :

          cout<<" Calculate Percentage " <<endl<<endl;

          cout<<" Enter value like this format \n number (1st num) / total number (2nd num) * 100 \n\n";

          cout<<" Enter 1st number : ";
          cin>>num1;
          cout<<" Enter 2nd number : ";
          cin>>num2;
          cin.ignore();

          percentage = (float(num1)/num2)*100;

          cout<<" Total percentage is = " <<percentage <<"%";
          cout<<endl<<endl;
          break;
          
          case 'p' :

          cout<<" Calculate Power " <<endl<<endl;

          cout<<" Enter number : ";
          cin>>num1;
          cout<<" Enter the power of element : ";
          cin>>power;
          cin.ignore();

          square=pow(num1,power);

          cout<<" The " <<num1 <<" to the power " <<power <<" is = " <<square;
          cout<<endl<<endl;

          break;

          case 'r' :

          cout<<" Root " <<endl<<endl;

          cout<<" Enter the number : ";
          cin>>num1;
          cin.ignore();

          square=num1*num1;

          cout<<" The root of " <<num1 <<" is = " <<square;
          cout<<endl<<endl;

          break;

          case 't' :

          cout<<" Square root " <<endl<<endl;

          cout<<" Enter the number : ";
          cin>>num1;
          cin.ignore();

          square=sqrt(num1);

          cout<<" The square root of " <<num1 <<" is = " <<square ; 
          cout<<endl<<endl;
          
          break;
        }

        if ( operate == 'e' )
        {
            break;
        }
       }

       else

       {

         cout<<" Enter the valid operation .";
         cout<<endl<<endl;

       }

      }  
    }
};

int main() {

    calculate c;
    c.calculator();
}