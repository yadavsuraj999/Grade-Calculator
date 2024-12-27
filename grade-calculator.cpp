#include<iostream>
using namespace std;
int main(){
    int score;
        cout<<"Enter Your Score :- ";
        cin>>score;

    if(score > 100){
        cout<<"Enter Your Score out of 100 ";
    }else{
    char grade = (score >= 90) ? 'A' : (score >= 80) ? 'B' : (score >= 70) ? 'C' : (score >= 33) ? 'D' : 'F';
    cout<<"Your grade is "<<grade<<" ";
        switch(grade){
            case 'A':
            cout<<"Excelent Work !"<<endl;
            break;
            case 'B':
            cout<<"Well Done !"<<endl;
            break;
            case 'C':
            cout<<"Good Job !"<<endl;
            break;
            case 'D':
            cout<<"You passed, but you could do better "<<endl;
            break;
            case 'F':
            cout<<"Sorry, You failed !"<<endl;
            break;
        }

        if(grade >= 'A' && grade <= 'D'){
            cout<<"You are eligible for next level"<<" ";
        }else{
            cout<<"Please try again next time ! ";
        }
    }


return 0;
}