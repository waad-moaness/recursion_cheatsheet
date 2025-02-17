#include <iostream>

using namespace std;

//add numbers from 0 to n
int add(int n)
{
    if (n==0)
    {
        return 0;
    }
    cout<<n<<endl;
    cout<<"**************"<<endl;
    return  n+add(n-1);
}
//5+(add(4))
//5+(4+(add(3)))
//5+(4+(3+(add(2))))
//5+(4+(3+(2+(add(1)))))
//5+(4+(3+(2+(1+(add(0))))))


//draw triangle
void draw(int x)
{
    if (x<0)
        return;
    draw(x-1);
    for(int i=0; i<x; i++)
    {
        cout<<"$";
    }
    cout<<endl;

}
//the order of execution        how it actually looks like
//draw(0)                        draw(4){
//draw(1)                          draw(3){
//draw(2)                            draw(2){
//draw(3)                              draw(1){
//draw(4)                                draw(0){....} } } } }


//this function calculate the sum of all numbers between two numbers
int  inbetween(int n,int m)
{
    if(n>m)
        return 0;
    cout<<n<<" "<<m<<endl;
    return n+inbetween(n+1,m);//2+(3+(4+(0)))
}
//this one returns n to the main function when it's done instead of returning 0 like the first one
//the two return the same value tho
int  inbetween2(int n,int m)
{
    if(n==m)
        return n;
    cout<<n<<" "<<m<<endl;
    return n+inbetween2(n+1,m);//2+(3+(4))
}

//factorial with recursion
int factorial(int n)
{
    if(n==0)
        return 1; //because we can * by zero so we return 1 so we don't get 0 as a result
    cout<<n<<endl;
    return n *factorial(n-1);
//5*(4*(3*(2*(1))))
}

int main()
{
    int n;
    cout<<"enter number: ";
    cin>>n;
    cout<<"add all numbers from 0 to "<<n<<endl;
    cout<<add(n);
    cout<<"\n*************************"<<endl;
    cout<<"\ndraw triangle "<<endl;
    draw(4);
    cout<<"\n*************************\nsum between two numbers"<<endl;
    cout<<inbetween(2,4);
    cout<<"\n*************************\nsum between two numbers 2"<<endl;
    cout<<inbetween2(2,4);
    cout<<"\n*************************\nfactorial"<<endl;
    cout<<factorial(5)<<endl;


    return 0;
}
