#include <bits/stdc++.h>
using namespace std;
 class Point {
    int x,y;
    friend double sd (Point l, Point m);
    public:
    Point(int a, int b){
        x=a;
        y=b;
    }
 };

 double sd(Point l, Point m)
{
    double c;
    c= sqrt(pow((l.x - m.x),2)+pow((l.y - m.y),2));
    return(c);
}

 int main(){
    int k , l, m,n;
    cout<<"Enter X & Y coor. of point 1"<<endl;
    cin>>k>>l;
    cout<<"Enter X & Y coor. of point 2"<<endl;
    cin>>m>>n;

    Point i(k,l),j(m,n);
    
    cout<<"Shortest Distance = "<<sd(i,j);
}
