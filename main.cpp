//
//  main.cpp
//  5october
//
//  Created by Say Artyom on 05/10/22.
//

#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
int main() {
    //Problem - 1
   /*
    int x = 0;
        cout<<"Write integer - ";
    cin>>x;
        if(x>=0){
                cout<<"Positive - " << x;
    }
        else{
                cout<<"Negative - " << x;

        }
   */
    
    
    /*
    int x = 0;
        cout<<"Write integer - ";
    cin>>x;
        if(x>=0){
            cout<<"Positive - " << x << " and ";
            if(x%2==0){
                cout<<"Even";
            }
            else{
                cout<<"Odd";
            }
               
    }
        else{
            cout<<"Negative - " << x << " and ";
            if(x%2==0){
                cout<<"Even";
            }
            else{
                cout<<"Odd";
            }

        }
    */
    
    /*
     //Problem - 3
    int a, b, c,z;
    
    cout << "Enter A number - ";
    cin >> a ;
    cout << "Enter B number - ";
    cin >> b ;
    cout << "Enter C number - ";
    cin >> c ;

    if(a > b && a > c)
        z = a;

    if(b > a && b > c)
        z = b;
    
    if(c > a && c > b)
        z = c;
  
    cout<<"The largest - " << z;
    
*/
    /*
    //Problem - 4
    int year;
      cout << "Enter a year: ";
      cin >> year;

      if (year % 400 == 0) {
        cout << year << " is a leap year";
      }
      else if (year % 100 == 0) {
        cout << year << " is not a leap year";
      }
      else if (year % 4 == 0) {
        cout << year << " is a leap year";
      }

      else {
        cout << year << " is not a leap year";
      }

    */
    
    //Problem - 5
    /*
    float a, b, c,d,x1,x2;
    
    
    cout << "Enter x^2 number - ";
    cin >> a ;
    cout << "Enter x number - ";
    cin >> b ;
    cout << "Enter C number - ";
    cin >> c ;
    cout<<"y = "<<a<<"x^2"<<"+"<<b<<"x"<<c<< endl;
    d=sqrt(b*b-4*a*c);
    x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);

    cout<<"X1 - " <<x1<<endl << "X2 - " <<x2<<endl;
    
    
    */
    //Problem-6
    
    
    /*
    int a, b, c,sum;
    
    cout << "Enter A number - ";
    cin >> a ;
    cout << "Enter B number - ";
    cin >> b ;
    cout << "Enter C number - ";
    cin >> c ;
    sum=a+b+c;
    
    if(sum<=180){
        cout<<"The triangle is valid"<<endl;
    }
    else{
        cout<<"The triangle is nit valid"<<endl;
    }
     */
    
    
    
    //Problem-7
    /*
    char ch;

        cout<<"Enter any character: ";
        cin>>ch;


        if(ch >= 'A' && ch <= 'Z')
        {
            cout<<ch<<" is uppercase alphabet";
        }
        else if(ch >= 'a' && ch <= 'z')
        {
            cout<<ch<<" is lowercase alphabet";
        }
        else
        {
            cout<<ch<<" is not an alphabet";
        }
*/
    
    
    
    
    //Problem-8
    /*
    string names = " ";
    cout<<"Enter last name - ";
    cin>>names;
    
    if(names=="Johnson" || names == "Smith" || names == "Jackson" || names == "Anderson" || names == "Bennett"){
        cout<<"You have access";
    }

    else{
        cout<<"You don have access";
    }
*/
    
    return 0;
}
