#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(vector<T> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int size,element;
    vector <int> vec1;
    cout<<"Enter the size of vector"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the element "<<i<<":"<<endl;
        cin>>element;
        vec1.push_back(element);
    }
     display(vec1);
     //vec1.pop_back();
     //vec1.erase(vec1.begin()+3);
     //vec1.clear();
     vector<int> :: iterator iter = vec1.begin()+2;
     vec1.insert(iter,566);
    
      display(vec1);

   /*
    vector<int> vec2;      //zero length integer vector
    vector<char> vec3(4);  //4-element character vector
    vector<char> vec4(vec3);//4-element character vector from vec3
    vector<int> vec5(6,3); //6-element vector of 3s
    display(vec5);
    */
}