#include<bits/stdc++.h>
using namespace std;
void bubble_sort1(vector<int>& a){

    for(int i=0; i<a.size()-1; i++){ 
      
      for(int j=0; j<a.size()-i-1; j++){
        if(a[j]>a[j+1])
        swap(a[j],a[j+1]);
    }
    }
    }
void insertion_sort1(vector<int>& a){

    for(int i=0; i<a.size()-1; i++){ 
      
      for(int j=i+1; j>0; j--){
        if(a[j]<a[j-1])
        swap(a[j],a[j-1]);
        else break;
    }
    }

}
void selection_sort1(vector<int>& a){

    for(int i=0; i<a.size()-1; i++){ 
      int mini=INT_MAX;
      int minidx=-1;
      for(int j=i; j<a.size(); j++){
        if(mini>a[j]){
            mini=a[j];
           minidx=j;
        }
    }
    swap(a[minidx],a[i]);
    }
}

int part(vector<int>& a,int start,int end){
    int pivot=a[end];
    int inx=start;
    for(int i=start;i<=end;i++){ 
        if(a[i]<pivot){
            swap(a[i],a[inx]);
            inx++;
        }
    }
    swap(a[inx],a[end]);
    return inx;
}
void quick_sort1(vector<int>& a,int start,int end){
    if(start<end){
    int partindx=part(a,start,end);
    quick_sort1(a,start,partindx-1);
    quick_sort1(a,partindx+1,end);
    }
    
}

int main(){
    int size;
    cin>>size;
    int temp;
    vector<int>v;
    for(int i=0;i<size;i++){
        cin>>temp;
        v.push_back(temp);    
    }

    // bubble sort;
    vector<int> bubble_sort(v.begin(),v.end());
    bubble_sort1(bubble_sort);
    for(auto x:bubble_sort) cout<<x<<" ";
    cout<<endl;

    
    // insetion_sort;
    vector<int> insertion_sort(v.begin(),v.end());
    insertion_sort1(insertion_sort);
    for(auto x:insertion_sort) cout<<x<<" ";
    cout<<endl;

    // selection sort;
    vector<int> selection_sort(v.begin(),v.end());
    selection_sort1(selection_sort);
    for(auto x:selection_sort) cout<<x<<" ";
    cout<<endl;

    // quick sort;
    cout<<"this is of quick sort order"<<endl;
    vector<int> quick_sort(v.begin(),v.end());
    quick_sort1(quick_sort,0,quick_sort.size()-1);
    for(auto x:quick_sort) cout<<x<<" ";
    cout<<endl;

    return 0;
}