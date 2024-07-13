#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> collection;
    collection["Tetrahedron"]=4;
    collection["Cube"]=6;
    collection["Octahedron"]=8;
    collection["Dodecahedron"]=12;
    collection["Icosahedron"]=20;
    int n{0};
    cin>>n;
    int faces{0};
    while(n>0){
        string face;
        cin>>face;
        faces+=collection[face];
        n--;
    }
    cout<<faces;
    return 0;
}