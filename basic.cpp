//Binary Number System 
//Q1: Decimal to Binary.
/*#include<iostream>
using namespace std;
int decToBinary(int decNum){
    int ans=0, pow=1;
    while(decNum>0){
        int rem = decNum%2;
        decNum/=2;
        ans += (rem*pow);
        pow *= 10;
    }
    return ans; //binary form 
}
int main(){
    int decNum = 15;
    //cout<<decToBinary(decNum)<<endl;
    for(int i=1; i<=10; i++){
        cout<<decToBinary(i)<<endl;
    }
    return 0;
}*/
//Q2. Binary to decimal.
/*#include<iostream>
using namespace std;
int BinaryToDec(int binNum){
    int ans=0 , pow=1;
    while(binNum>0){
        int rem = binNum%10;
        ans += rem*pow;
        binNum /= 10;
        pow *= 2;
    }
    return ans; 
}
int main(){
     int binNum = 111;
    cout<<BinaryToDec(binNum)<<endl;
    return 0;
}*/ 
//Bitwise Operators 
/*#include<iostream>
using namespace std;
int main(){
    int a=4,b=8;
    cout<<(a&b)<<endl;
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
    int a=4, b=8;
    cout<<(a|b)<<endl;
    return 0;
}*/
/*#include<iostream>
using namespace std;
int main(){
    int a=3, b=7;
    cout<<(a^b)<<endl;
    return 0;
}*/ 
//Scope of variables 
//Local Scope.
/*#include<iostream>
using namespace std;
int main(){
    if(3>1){
        int x=10;
    }
    cout<<x<<endl;
    return 0;
}*/              //error
/*#include<iostream>
using namespace std;
int main(){
    for(int i=0; i<10; i++){

    }
    cout<<i<<endl;
    return 0;
}*/              //error

#include<iostream>
using namespace std;
int x=10;
int fun(){
    cout<<x<<endl;
}
int main(){
    fun();
    cout<<x<<endl;
    return 0;
}