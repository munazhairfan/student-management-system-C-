#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<ctime>
#include<string>
using namespace std;
class students{
	string Names;
	int rollNumbers;
	string Grades;
	public:
	void setNames(string name){
		Names=name;
	}
	string getNames(){
		return Names;
	}
	void setrollNumbers(int rn){
		rollNumbers=rn;
	}
	int getrollNumbers(){
		return rollNumbers;
	}
	void setGrades(string grade){
		Grades=grade;
	}
	string getGrades(){
		return Grades;
	}
	
};
main(){
	string arrayN[5]={"std1","std2","std3","std4","std5"};
	students object[5];
	for(int i=0;i<5;i++){
		object[i].setNames(arrayN[i]);
	}
	int arrayR[5]={01,02,03,04,05};
	for(int i=0;i<5;i++){
		object[i].setrollNumbers(arrayR[i]);
	}
	string arrayG[5]={"B","D","A","A","C"};
	for(int i=0;i<5;i++){
		object[i].setGrades(arrayG[i]);
	};
	
	
	cout<<"===========Result==========="<<endl;
	cout<<"Names\tRoll Numbers\tGrades\n";
	for(int i=0;i<5;i++){
	cout<<object[i].getNames()<<"\t\t"<<object[i].getrollNumbers()<<"\t"<<object[i].getGrades()<<"\t"<<endl;
	}
}
