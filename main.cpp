#include <iostream>
#include <cmath>
using namespace std;
double f_x(double x){
	return (x*x*x+2*x-1);
}
double df_x(double x){
	return (3*x*x+2);
}
int main(){
	double curr_value = 1;
	double prev_value = 1000;
	while(true){
		if (fabs(curr_value-prev_value)<0.001) break;	
		cout << curr_value << endl;
		prev_value = curr_value;
		curr_value -= (f_x(curr_value)/df_x(curr_value));		
	}
	cout << "Done" << endl;
	return 0;
}	

