#include<iostream>
using namespace std;

int main(){
	int sllt[] = {2,3,5};
	int gtt[] = {10,5,1};
	
	int tiencandoi = 34;
	cout <<tiencandoi<<" thanh:\n";
	for(int i=0; i<3; i++){
		int sl = tiencandoi/gtt[i];
		while(sl>sllt[i]) sl--;
		tiencandoi -= sl*gtt[i];
		cout<< sl <<" to "<< gtt[i] <<" nghin\n";
		if(tiencandoi==0) break;
	}
}