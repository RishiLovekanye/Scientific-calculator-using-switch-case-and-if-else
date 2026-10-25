#include <iostream>
#include <cmath>
using namespace std;
int main(){
double a,b,answer;
    int choice;
    char again;
    int angle;
    do{
        cout<<"\n===CALCULATOR===\n";
        cout<<"1.ADD\n";
        cout<<"2.SUBSTRACTION\n";
        cout<<"3. MULTIPLICATION\n";
        cout<<"4.DIVISION\n";
        cout<<"5.SQUARE ROOT\n";
        cout<<"6.POWER\n";
        cout<<"7.SIN\n";
        cout<<"8.COS\n";
        cout<<"9.TAN\n";
        cout<<"10.LOG\n";
        cout<<"11.LOG(Base 10)\n";
        cout<<"12.Exponential\n";
        cout<<"0. Exit\n";

        cout<<"Enter your choice"<<endl;
        cin>>choice;
        if(choice==0){
            cout<<"calculator closed.\n";
            break;
        }
        if(choice<1 || choice>12){
            cout<<"INVALID CHOICE!\n";
            continue;
        }
        switch(choice){
            case 1 :
                cout<<"ENTER TWO NUMBERS FOR ADDITION  ";
                cin>>a>>b;
                cout<<a<<" + "<<b<<" = "<<a+b<<endl;
            break;

            case 2 :
                cout<<"ENTER TWO NUMBERS FOR SUBSTRACTION  ";
                cin>>a>>b;
                cout<<a<<" - "<<b<<" = "<<a-b<<endl;
            break;

            case 3 :
                cout<<"ENTER TWO NUMBERS FOR MULTIPLICATION  ";
                cin>>a>>b;
                cout<<a<<" * "<<b<<" = "<<a*b<<endl;
            break;

            case 4:
    cout << "enter two numbers for divison: ";
    cin >> a >> b;
    if (b == 0) {
        cout << "Division by Zero is not possible!\n";
    } else {
        cout << a / b << endl;
    }
    break;


            case 5 :
            if(choice==5){
                cout<<"please enter the number whos square root you want to find!";
                cin>>a;
                if(a<0){
                    cout<<"SQUARE ROOT OF A NEGATIVE NUMBER IS NOT POSSIBLE!!\n";
                    continue ;
                }
                answer=sqrt(a);
                cout<<answer<<endl;
            }
            break;

            case 6:
                cout<<"Enter the base number : ";
            cin>>a;
            cout<<"\nEnter the power : ";
            cin>>b;
            answer= pow(a,b);
                cout<<answer<<endl;
            break;

            case 7 :
                cout<<"enter the angle in degree ";
                cin>>angle;
            answer = sin(angle * (M_PI / 180.0));
            cout<<answer<<endl;
            break;

            case 8 :
            cout<<" enter the angle in degree";
            cin>>angle;
           answer = cos(angle * (M_PI / 180.0));
           cout<<answer<<endl;
            break;

            case 9:
            cout<<"Enter the angle in degree";
            answer = tan(angle * (M_PI / 180.0));
            cout<<answer<<endl;
            break;

	    case 10:
	    cout<<"for natural log";
	    cin>>a;
	    answer= log(a);
	    cout<<answer<<endl;
	    break ;

	    case 11 :
	    cout<<"enter the value for log base 10: ";
	    cin>>a;
            answer = log10(a);
	    cout<<answer<<endl;
            break;
            
            case 12 :
            cout<<"Enter the value for exponential function: ";
            cin>>a;
            answer = exp(a);
            cout<< answer<<endl;
            break;

        }

      cout<<"calculate again (y/n) : ";
      cin>>again;
    }
	while (again == 'y' || again == 'Y');

    return 0;
}
