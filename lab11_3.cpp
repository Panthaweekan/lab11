#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include <iomanip> 

using namespace std;

int main (){
	int count = 0;
    double sum = 0 , mean = 0 , SDmean = 0 , SD = 0;
    string text;
    ifstream source("score.txt");
    while (getline(source,text))
    {
        sum += atof(text.c_str());
        SDmean += pow(atof(text.c_str()),2);
        count++;
    }


    mean = sum/count;
    SD = sqrt((SDmean / count) - pow(mean,2));

    cout << setprecision(3);
	cout << "Number of data = " << count << "\n";
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << SD; 
    
    source.close();
    
	return 0;
}
