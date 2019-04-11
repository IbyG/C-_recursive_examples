#include <iostream>
using namespace std;

// function declaration
int power(int num1, int num2);
void printStars1(int count);
void printStars2(int count, int temp);
int main () {

    int ans = power(5,3);
    cout<<"the Power: "<<ans<<endl;

    printStars1(4);
    printStars2(4,4);
   return 0;
}

//finds the power by given the number x and the power of it y
int power(int x, int y)
{
    if(y != 0)
    {
        return(x*power(x,y-1));
    }
    else
        return(x);


}

void printStars1(int count)
{
    int temp = count;
 //this is printing the stars using for loops rather than recursions
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
        while(temp != 0)
        {
            cout<<"*";
            temp--;
        }
        cout<<endl;
        printStars1(count-1);
    }

}

void printStars2(int count, int temp)
{
    //counts from 1 and goes up
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


