#include<iostream>
using namespace std;


class floor{
    private:
     int floor_no;

    public:
    floor(){
        cout<<"select floor ";
        cin>>floor_no;
    }
};

class elevator{
    private:
    int status;

    public:

    elevator() : status (2){} //constructor

    void isMoving()   //status fuction 
    {
        if(status==1)
        {
            cout<<"lift is engaged "<<endl;
        }
        else if(status==0)
        {
            cout<<"lift is  comming "<<endl;
        }
        else
        {
            cout<<"lift is idle 'comming' "<<endl;
        }
        
    }
   

};



class Direction{
    private:
    int direction;

    public:
    Direction(){
        cout<<"select direction 1 for up 0 for down __ ";
        cin>>direction;
        if(direction==0){
            elevator e;
            e.isMoving();
            floor f;
        }
        else{
            cout<<"Moving Up..."<<endl;
            floor f;
        }
    }

};



int main(){
    Direction b;
    return 0;
}