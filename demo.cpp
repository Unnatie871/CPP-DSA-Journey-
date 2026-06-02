/*#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age: ";
    cin>>age;                //Taking input in c++ 
    cout<<"your age is : "<<age<<endl;
    return 0;
}*/
//Arithmetic Operators 
/*#include<iostream>
using namespace std;
int main()
{
    int a=10,b=5;
    cout<<"sum = "<<(a+b)<<endl;
    cout<<"difference = "<<(a-b)<<endl;
    cout<<"product = "<<(a*b)<<endl;
    cout<<"division = "<<(a/b)<<endl;
    cout<<"modulus = "<<(a%b)<<endl;
    return 0;
} */
/*#include<iostream>
using namespace std;
int main()
{
    //int a=11,b=5;
    cout<<(5/2)<<endl;
    cout<<(5/(double)2)<<endl;
    return 0;
}*/

/*#include<iostream>
using namespace std;
int main()
{
    int answer = (5/(double)2);
    cout<<answer<<endl;
    return 0;
}*/
//Relational Operators 
/*#include<iostream>
using namespace std;
int main()
{
    cout<<(3<5)<<endl;
    cout<<(3>5)<<endl;
    cout<<(3<=3)<<endl;
    cout<<(3==3)<<endl;
    cout<<(3!=5)<<endl;
    cout<<(5!=5)<<endl;
    return 0;
}*/
//Logical operators 
/*#include<iostream>
using namespace std;
int main()
{
    cout<<!(3>1)<<endl;
    cout<<((3<1) || (3<5))<<endl;
    cout<<( (3<1) && (3<5))<<endl;
    return 0;
}*/
// Q1- calculate sum of 2 numbers
/*#include<iostream>
using namespace std;
int main()
{
    //int a=5,b=10;
    //cin>>a,b;
    //cout<<(a+b)<<endl;
    //int sum=a+b;
    //cout<<"sum = "<< sum<<endl;
    int a,b;
    cout<<"enter a : ";
    cin>>a;
    cout<<"enter b : ";
    cin>>b;
    int sum = a+b;
    cout << "sum = "<<sum<<endl;
    return 0;
} */
//UNARY OPERATORS 
/*#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=a++;//kaam ; update
    //cout<<"b = "<<b<<endl;
    //cout<<"a = "<<a<<endl;
    //int b=++a;
    cout<<"b = "<<b<<endl;
    cout<<"a = "<<a<<endl;
    return 0; 
}*/
//Q2-Build a calculator 
/*#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;
    int sum = a+b;
    int difference = a-b;
    int product = a*b;
    int division = a/b;
    int modulus = a%b;
    cout<<"sum = "<<sum<<endl;
    cout<<"difference = "<<difference<<endl;
    cout<<"product = "<<product<<endl;
    cout<<"division = "<<division<<endl;
    cout<<"modulus = "<<modulus<<endl;
    return 0;

}*/ 
//Conditional Statements 
/*#include<iostream>
using namespace std;
int main()
{
    int n=1;
    if(n>=0){
        cout<<"n is positive\n";
    }else{
        cout<<"n is negative\n";
    }
    return 0;
}*/
//Q3-Eligible to vote
/*#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the age : ";
    cin>>age;
    if(age>=18){
        cout<<"Eligible to vote\n";
    }else{
        cout<<"Not eligible to vote\n";
    }
    return 0;
}*/
//Q4- Find whether a number let say n is even or odd 
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number: ";
    cin>>n;
    if(n%2==0){
        cout<<"even\n";
    }else{
        cout<<"odd\n";
    }
    return 0;
}*/
//Q5-if marks greater than 90 print pass, if it us between 80 and 70 print better if less than 70 needs improvement.
/*#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"enter marks : ";
    cin>>marks;
    if(marks>=90){
        cout<<"good\n";
    }else if(marks>=80 && marks<90){
        cout<<"better\n";
    }else{
        cout<<"needs improvement\n";
    }
    return 0;
}*/
//Q6- Find character is lowercase or uppercase 
/*#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter character: ";
    cin>>ch;
    if(ch>='a'&& ch<='z'){
        cout<<"lowercase\n";
    }else{
        cout<<"uppercase\n";
    }
    return 0;
}*/
//with ascii values 
/*#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter char : ";
    cin>>ch;
    if(ch>=65&&ch<=90){      //implicit6 type conversion is used here 
        cout<<"Uppercase\n";
    }else{
        cout<<"lowercase\n";
    }
    return 0;
}*/
//Ternary Statement
/*#include<iostream>
using namespace std;
int main()
{
    int n=0;
    cout<<(n>=0 ? "positive" : "negative") << endl;
    return 0;
}*/
//LOOPS - while loops 
//Q7 - Print numbers from 1 to 5
/*#include<iostream>
using namespace std;
int main()
{
    int n=50;
    int count = 1;
    while(count<=n){
        cout<<count<<" ";
        count++;
    }
    cout<<endl;
    return 0;
}*/
//for loop (initialisation;condition;updation)
/*#include<iostream>
using namespace std;
int main()
{
    int n=10;
    for(int i=1; i<=n; i++){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}*/
//Q8- Sum of numbers from 1 to n. 
/*#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    cout<<"enter n : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum = sum + i;
        if(i==5){
            break;
        }
    }
    cout<<"sum = "<<sum<<endl;
    return 0;

}*/
//Q9- Sum of odd numbers from 1 to N.
/*#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int sum=0;
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    cout<<"sum = "<<sum<<endl;
    return 0;
} */
//Q10. Sum of even numbers from 1 to n.
/*#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int esum=0;
    for(int i=0; i<=n; i++){
        if(i%2==0){
            esum+=i;
        }
    }
    cout<<"sum= "<<esum<<endl;
    return 0;
}*/
//Q11. Do sum of odd numbers same ques with while loop.
/*#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int sum=0;
    int i=1;
    while(i<=n){
        if(i%2!=0){
            sum=sum+i;
        }
        i++;
    }
    cout<<"sum = "<<sum<<endl;
    return 0;
}*/
//do-while 
/*#include<iostream>
using namespace std;
int main(){
    do{
        cout<<"Hello World!\n";
    }while(3>5);
    return 0;
}*/
//Q12: To print no. 1 to 10 with the help of do-while
/*#include<iostream>
using namespace std;
int main(){
    int n=10;
    int i=0;
    do{
        cout<<i<<" ";
        i++;
    }while(i<=n);
    cout<<endl;
    return 0;
}*/
//Q13- Check if a number is a prime or not. 
/*#include<iostream>
using namespace std;
int main(){
    int n=14;
    bool isPrime = true;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){ //non prime
            isPrime = false;
            break;

        }
    }
    if(isPrime==true){
        cout<<"prime no\n";
    }else{
        cout<<"non prime no\n";
    }
    return 0;
} */
//Nested Loops 
/*#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=5; i++){
        cout<<"*****"<<endl;
    }
    return 0;
}*/ 
/*#include<iostream>
using namespace std;
int main(){
    for(int i=1; i<=5; i++){
        int m=10;
    for(int i=1; i<=m; i++){
        cout<<"*";
    }
    cout<<endl;    
    }
    return 0;
}*/ 
/*#include<iostream>
using namespace std;
int main(){
    int n=10;
    for(int i=1; i<=n; i++){
        int m=5;
        for(int j=1; j<=m; j++){
            cout<<"*";
        }
        cout << endl;
    }
    return 0;
} */
//Q14 - Sum of all numbers from 1 to N which are divisible by 3. 
/*#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    int sum = 0;
    for(int i=1;i<=n;i++){
        if(i%3==0){
            sum = sum + i;

        }
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}*/
//Q15- Print factorial of a number N 
/*#include<iostream>
using namespace std;
int main(){
    int n=2;
    int factorial = 1;
    for(int i=1; i<=n; i++){
        factorial = factorial*i;
    }
    cout<<factorial<<endl;
    return 0;
}*/ 
