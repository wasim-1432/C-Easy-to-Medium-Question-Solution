#include<iostream>
using namespace std;
class Distance
{
    private:
        int km,m,cm;
    public:
        Distance(int x=0,int y=0,int z=0)
        {
            km=x;
            m=y;
            cm=z;
        }
        void Normalize()
        {
            cm=cm-1;
            m=m+cm/100;
            cm=cm%100;
            km=km+m/1000;
            m=m%1000;

        }
        Distance operator --(Distance D)
        {
            Distance temp;
            temp.km=km+D.km;
            temp.m=m+D.m;
            temp.cm=cm+D.cm;
            return temp;
        }
        void showData()
        {
            cout<<"KM="<<km<<" M="<<m<<" CM="<<cm<<endl;
        }
};
int main()
{
    Distance d1(123,23,23),d2(123,44,23),d3;
    d3=d1--d2;
    d3.Normalize();
    d3.showData();
    cout<<endl;
    return 0;
}