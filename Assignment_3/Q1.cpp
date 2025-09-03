/*Develop a menu driven program demonstrating the following operations on a Stack using array:
(i) push(), (ii) pop(), (iii) isEmpty(), (iv) isFull(), (v) display(), and (vi) peek().*/

#include<iostream>
using namespace std;

class stack{
    int element[5];
    int top=-1;

public:
    int isFull()
    {
        if (top==4) 
            return 1;
        else
          return 0;
 //Time Complexity: O(1);
    }
    void push(int x)
    {
        if(isFull())
            cout<<"\n Overflow";
        else
            top++;
            element[top]= x;
    }
 //Time Complexity: O(1);
    void display()
    {
        for (int i=top;i>=0;i--)
            cout<<element[i]<<endl;
    }
 //Time Complexity: O(N);
    int isEmpty()
    {
        if(top==-1)
            return 1;
        else
            return 0;
    }
 //Time Complexity: O(1);
    void peek() 
    {
        if(isEmpty())
        {
            cout<<"Underflow";
        }
        else
            cout<<element[top];
    }
 //Time Complexity: O(1);
    void pop()
    {
        if(isEmpty())
        {
            cout<<"Underflow";
        }
        else
            top--;
    }
 //Time Complexity: O(1);

};


int main()
{
    stack S;
    for (int i=0;i<=4;i++)
    S.push(10+i);
    S.display();
    S.push(50);
    //S.display();
    cout<<"Top element is ";
    S.peek();
}
