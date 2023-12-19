#include <iostream>
#include <iomanip>
#include<cmath>
#include<string>
#include<fstream>
using namespace std;

int main(){
    ifstream source;
    ofstream dest;
    source.open("score.txt");
    dest.open("File lab10_3.cpp");
    int count=0;
    float sum_sd;
    float sum=0;
    string textline;
	while(getline(source,textline)){
	    dest<<textline<<endl;
        sum+=atof(textline.c_str());
        sum_sd+=pow(atof(textline.c_str()),2);
        count++;
	}
	float avg=sum/count;
    cout << "Number of data = "<<count<<endl;
    cout << setprecision(3);
    cout << "Mean = "<<sum/count<<endl;
    cout << "Standard deviation = "<<sqrt((sum_sd/count)-(avg*avg));
}