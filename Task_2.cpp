//----------------------------------------------------Calculator Program------------------------------------------------------------------


#include<iostream>
using namespace std;
    float a;
    float b;
    char op;

void getData()
{
    cout<<" Enter the number a : ";
    cin>>a;
    cout<<"\n Enter the number b : ";
    cin>>b;
    cout<<"\n Enter the operation to be performed ' + , - , * , / ' : ";
    cin>>op;
}

void calculator (float firstNum ,float secondNum ,char operation)
{ 
    switch(op)
    {
        case '+' : cout<<" The Result is "<<a + b;
        break;
        case '-' : cout<<" The Result is "<<a - b;
        break;
        case '/' : cout<<" The Result is "<<a / b;
        break;
        case '*' : cout<<" The Result is "<<a * b;
        break;
        default : cout<<" INVALID INPUT "<<endl;
    }

}


int main()
{
    char repeat;
    do{
        getData();
        calculator(a ,b, op);
        cout<<"\n\nEnter 'y' to repeat or Enter 'n' to Exit\n";
        cin>>repeat;
    }while(repeat =='y');
    return 0;
    
}
