//Patterns 
//1.Square Pattern 
/*#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/
//To print * 
/*#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0; i<n; i++){
        char ch='A';
        for(int j=0; j<n; j++){
            cout<<ch<<" " ;
            ch=ch+1; //char + int (type conversion)
        }
        cout<<endl;

    }
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
    int n=3;
    int num=1;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    cout<<"after pattern: "<<num<<endl; //10
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
    int n=3;
    char ch= 'A';
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<ch<<" ";
            ch = ch+1;

        }
        cout<<endl;
    }
    cout<<"pattern is: "<<ch<<endl;
    return 0;
}*/
//Triangle Pattern 
/*#include<iostream>
using namespace std;
int main(){
    int n=6;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/
//Saame pattern as above just * replace by number 
/*#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<(i+1)<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/
//Triangle pattern for characters 
/*#include<iostream>
using namespace std;
int main(){
    int n=6;
    char ch='A';
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<ch<<" ";
            //ch++;
        }
        ch++;
        cout<<endl;
    }
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0; i<n; i++){
        int num = 1;
        for(int j=0; j<i+1; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}*/
//alternative of this 
/*#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0; i<=n-1; i++){
        for(int j=1; j<=i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/
//Reverse Triangle Pattern 
/*#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0; i<=n-1; i++){
        for(int j=i+1; j>0; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}*/
//Floyd's Triangle Pattern 
/*#include<iostream>
using namespace std;
int main(){
    int n=4;
    int num = 1;
    for(int i=0 ;i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
} */
//Reverse character version of triangle  
/*#include<iostream>
using namespace std;
int main(){
    int n=4;
    //char ch='A';
    for(int i=0; i<=n-1; i++){
        char ch = 'A' + i;
        for(int j=0; j<i+1; j++){
            cout<<ch<<" ";
            ch--;

        }
        //ch--;
        cout<<endl;
    }
    return 0;
}*/
//Alternative of this one more method 
/*#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0; i<n; i++){
        for(int j=i+1; j>0; j--){
            cout<<char('A'+j-1);
        }
        cout<<endl;
    }
    return 0; 
}*/
//INVERTED TRIANGLE PATTERN 
/*#include<iostream>
using namespace std;
int main(){
    int n=4;
    for(int i=0; i<n; i++){
        //spaces
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        //numbers 
        for(int j=0; j<n-i; j++){
            cout<<(i+1);
        }
        cout<<endl;
    }
    return 0;
}*/ 
//inverted triangle pattern for character version 
/*#include<iostream>
using namespace std;
int main(){
    int n=4;
    char ch='A';
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<n-i; j++){
            cout<<ch;
            
        }
        ch++;
        cout<<endl;

    }
    return 0;
}*/
//Pyramid Pattern 
/*#include<iostream>
using namespace std;
int main(){
    int n=8;
    for(int i=0; i<n; i++){
        //spaces : n-i-1
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        //num1 : i+1  
        for(int j=1; j<=i+1; j++){
            cout<<j;
        }
        //num2: i to 1(backward loop)
        for(int j=i; j>0; j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}*/ 
//Hollow Diamond Pattern 
/*#include<iostream>
using namespace std;
int main(){
    int n=4;
    //top 
    for(int i=0; i<n; i++){
        //spaces 
        for(int j=0; j<n-i-1;j++){
            cout<<" ";
        }
        cout << "*";
        if(i!=0){
            //spaces 
            for(int j=0; j<2*i-1;j++){
                cout<<" ";
            }
            cout << "*";
        }
        cout<<endl;
    }
    //bottom 
    for(int i=0; i<n-1; i++){
        //spaces 
        for(int j=0; j<i+1; j++){
            cout<<" ";
        }
        cout<<"*"; 
        if(i!=n-2) {
            //spaces
            for(int j=0; j<2*(n-i)-5;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}*/
//FUNCTIONS 
/*#include<iostream>
using namespace std;
//function definition 
void printHello(){
    cout<<"hello\n";
}
int main(){
    //function call/ invoke 
    printHello();
    printHello();
    printHello();
    return 0;
}*/ 

/*#include<iostream>
using namespace std;
//function definition 
int printHello(){
    cout<<"hello\n";
    return 3;
}
int main(){
    //function call / invoke 
    int val = printHello();
    cout<<"val= "<<val<<endl;
    return 0;
}*/ 

/*#include<iostream>
using namespace std;
//function definition 
int printHello(){
    cout<<"hello\n";
    return 3;
}
int main(){
    //function call/ invoke
    cout<<printHello()<<endl;
    return  0;
}*/ 

//Q15.  To print the sum of 2 numbers 
/*#include<iostream>
using namespace std;
//function definition
double sum(double a , double b){  //parameters 
    double s = a + b;
    return s;
}
//min of 2 number 
int minOfTwo(int a, int b){
    if(a<b){
        return a;
    } else{
        return b;
    }
}
int main(){
    cout<<sum(10.11,5.34)<<endl;   //arguments 
    cout<<minOfTwo(10,5)<<endl;
    return 0;
}*/ 

//Q16. Calculate sum of numbers from 1 to N. 
/*#include<iostream>
using namespace std;
//function definition 
int  sumN(int n){
    int sum=0;
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    return sum;
}
int main(){
    cout<<sumN(5)<<endl;
    cout<<sumN(10)<<endl;
    return 0;
}*/ 
//Q17. Calculate n factorial
/*#include<iostream>
using namespace std;
//function definition 
int factorial(int n){
    int fact = 1; 
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    cout<<factorial(2)<<endl;
    return 0;
} */
//Pass by value 
/*#include<iostream>
using namespace std;
int sum(int a, int b){
    a=a+10; //15
    b=b+10; //12 
    return a+b; //27 
}
int main(){
    int a=5,b=2;
    cout<<sum(a,b)<<endl;
    cout<<a<<endl; //5
    cout<<b<<endl; //2 
    return 0;
}*/ 

/*#include<iostream>
using namespace std;
int changeX(int x){
    x=2*x; //10
    cout<<"x ="<<x<<endl;
} 
int main(){
    int x=5;
    changeX(x);
    cout<<"x ="<<x<<endl; //5
    return 0;
}*/ 

//Q18. Calculate sum of digits of a number. 
/*#include<iostream>
using namespace std;
int sumOfDigits(int num){
    int digitSum=0; 
    while(num>0){
        int lastDigit = num%10;
        num/=10;
        digitSum += lastDigit;
    }
    return digitSum;
} 
int main(){
    cout<<"sum = "<<sumOfDigits(264)<<endl;
    return 0;
}*/ 

//Q19- calculate nCr binomial coefficent for n & r. (n! / r! (n-r)!) 
/*#include<iostream>
using namespace std;
int factorial(int n){
    int fact=1;
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}
int nCr(int n, int r){
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n-r);
    return fact_n/ (fact_r*fact_nmr);
}
int main(){
    int n=6, r=3;
    cout<<nCr(n,r)<<endl;
    return 0;

}*/ 

//Q20- WAF to check if a number is a prime or not. 
/*#include<iostream>
using namespace std;
int prime(int n){ 
    //if(n<=1)
        //return 0;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
} 
int main(){
    cout<<prime(2)<<endl;
    return 0;
}*/
//Q21 - WAF to print all prime numbers from 2 to N. 
/*#include<iostream>
using namespace std;
int isPrime(int n){
    if(n<=1){
        return 0;
    }
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return 0;
        } 
    }
    return 1;
}
void printPrimes(int n){
    for(int i=2; i<=n; i++){
        if(isPrime(i))
            cout<<i<<" ";
    }
}
int main(){
    printPrimes(10);
    return 0;
}*/
