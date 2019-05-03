#include <iostream>
#include <algorithm>

using namespace std;

void show(int a[]){
    for(int i=0;i<10;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void show_pair(pair<int,int>p[10]){
    for(int i=0;i<10;i++){
        cout <<  p[i].first << " " <<p[i].second << endl;
    }
    cout << endl;
}


int main()
{
    int n = 10;
    pair<int,int>p[n];
    int a[n] = {20,19,18,17,16,15,14,13,12,11};
    for(int i=0;i<n;i++){
        p[i].first = a[i];
        p[i].second = i;
    }

    show(a);
    show_pair(p);
    sort(p,p+n);
    show_pair(p);

    //sort(a+1,a+5);
    //cout << "" << endl;
    //show(a);

}
