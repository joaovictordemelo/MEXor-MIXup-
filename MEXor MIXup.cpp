#include <bits/stdc++.h>

using namespace std;

void test(){
    
    int a, b;
    cin >> a >> b;
    
    
    int h = a - 1;
    int r;
    if(h % 4 == 0){
    	r = h;
	}else if(h % 4 == 1){
		r = 1;
	}else if(h % 4 == 2){
		r = h + 1;
	}else{
		r = 0;
	}
	int min = a;
	
	if(r == b){
		
	}else if(r == (a^b)){
		min = min +2;
	}else{
		min++;
	}
    
    cout << min << endl;
}

int main(){
    
    int t;
    cin >> t;
    while(t--){
        
        test();
    }
    
}
