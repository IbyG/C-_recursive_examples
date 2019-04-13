#include <iostream>
using namespace std;

// function declaration
double power(int num1, int num2);
void printStars1(int count);
void printStars2(int count, int temp);
void ps(int n);
void print(int);
int main () {

    double ans = power(2,-3);
    cout<<"the Power: "<<ans<<endl;

    printStars1(9);
    //printStars2(9,9);
    //ps(9);
   return 0;
}

//finds the power by given the number x and the power of it y
double power(int x, int y)
{



    if(y > 0)
    {
        return(x*power(x,y-1));
    }
    if(y <0)
    {
        return(1/power(x,-y));
    }
    else
        return(1);


}

/*
void ps(int n){
    printStars(n);
    if(n > 1) ps(n-1)
    printStars(n);
}
*/

void printStars1(int count)
{
    int temp = count;
 /*
    int temp = count;

    //from max to min
    for(temp; temp != 0; temp--)
    {
        for(int i = temp; i != 0; i--)
        {
            cout<<"*";
        }
        if(temp != 1)
        {
            cout<<endl;
        }

    }
    //now temp = 0
    //from min to max
    for(temp; temp <= count; temp++)
    {
        for(int i = temp; i != 0; i--)
        {
            cout<<"*";
        }
        cout<<endl;
    }


*/

    if(count != 0)
    {
        print(count);
        cout<<endl;

        printStars1(count-1);

        print(count);
        cout<<endl;
    }

}


void printStars2(int count, int temp)
{
    temp = count-(temp-1);
    //cout<<"temp: "<<temp<<endl;

    if(temp != count)
    {
        for(int i = 0; i <= temp; i++)
        {
            cout<<"*";
        }

        cout<<endl;
        temp = count-temp;
        printStars2(count,temp);
    }
}


void print(int count)
{

    if (count != 0)
    {
        cout<< "*";
        print(count - 1);
    }
}






