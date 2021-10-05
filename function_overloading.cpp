#include<iostream>

using namespace std;

int sum(int a, int b){
    cout<<"Using functions with two arguments"<<endl;
    return a+b;
}
int sum(int a,int b,int c){
    cout<<"Using functions with three arguments"<<endl;
    return a+b+c;
}

// Calculate the volume of cylinder

double volume(double r,int h){
    return 3.14*r*r*h;
}

//Calculate the volume of cube

int volume(int a){
    return a*a*a;
}

// Calculate the volume of cuboid

int volume(int l,int b,int h){
    return l*b*h;
}

int main(){
    cout<<"The sum of 3 and 4 is "<<sum(3,4)<<endl;
    cout<<"The sum of 3 , 4 and 6 is "<<sum(3,4,6)<<endl;
    cout<<"The volume of cuboid of l,b,h, 3 , 4 and 6 is "<<volume(3,4,6)<<endl;
    cout<<"The volume of cylinder of r,h, 3 and 4 is "<<volume(3,4)<<endl;
    cout<<"The volume of cube of a 3 is "<<volume(3)<<endl;
    return 0;
}