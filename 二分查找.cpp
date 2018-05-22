#include<iostream>
#include<vector>
using namespace std;
int bsearch(int* A,int x,int y,int v){//Çø¼ä 0£¬n 
        int m;
        while(x<y){
            m=x+(y-x)/2;
            if(A[m]==v)return m;
            else if(A[m]<v)y=m;
            else x=m+1;
        }
        return x;
}
bool Find(int target, vector<vector<int> > array) {
        int n=array.size();
        int ms=array[0].size();
        for(int i=0;i<n;i++){
            int x=0,y=ms,m;
            while(x<y){
                m=x+(y-x)/2;
                if(array[i][m]==target)return true;
                else if(array[i][m]>target)y=m;
                else x=m+1;
            }
        }
        return false;
    }
int main()
{
	int xxx,x[12]={16};
	cout << bsearch(x,0,4,1)<<"\n";
	cout << bsearch(x,0,4,5)<<"\n";
	cout << bsearch(x,0,4,9)<<"\n";
	cout << bsearch(x,0,4,13)<<"\n";
	cout << bsearch(x,0,4,17)<<"\n";
	
	cin >> xxx; 
	vector<vector<int> > v;
	for(int i=0;i<4;i++){
	vector<int> xxx;
	for(int j=0;j<4;j++){
		int x;
		cin >> x;
		xxx.push_back(x); 
	}
    v.push_back(xxx);
	} 
	cout << Find(15,v) << "\n";
	return 0;
} 
