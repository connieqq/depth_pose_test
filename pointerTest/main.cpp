#include <iostream>
#include <fstream>
using namespace std;
class Point
{
public:
	double x, y, z;

public:
	Point();
	Point(double x, double y, double z);
	Point& operator= (const Point & p);

};


Point::Point()
{
	x, y, z = 0.0;
}
Point::Point(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
Point& Point::operator=(const Point&  p)
{
	this->x = p.x;
	this->y = p.y;
	this->z = p.z;
	return *this;
}


int main()
{

    int a =100;
    //int b[3] = {1,2,3};
    int *p;
    p=&a;
    int &r =*p;
    int &n = a;
    int  m =a;
    unsigned char pixel[100][4];
    for(int x=0; x<100;x++)
    {
        pixel[x][0]=0xff;
        pixel[x][1]=0x00;
        pixel[x][2]=0x00;
        pixel[x][3]=0xff;

    }

    cout <<pixel[0][0]<<endl<<pixel[0][1]<<endl;
    //cout<<p <<"  "<<*p<<endl;
    //cout<<&a<<"  "<<a<<endl;
    //cout<<&r<<"  "<<r<<endl;
    //cout<<&n<<"  "<<n<<endl;
    //cout<<&m<<"  "<<m<<endl;

    Point q;
	q.x=1.0;
	q.y =2.0;
	q.z = 3.0;

    //Point p = Point(60.0, 70.0, 0.0);


	//cout << p.x << "," << p.y << "," << p.z << endl;
	//cout << q.x << "," << q.y << "," << q.z << endl;
	//cout << p->x<<"," <<p->y<< "," << p->z <<endl;


    //int *q;
    //q = &b[1];

    // ofstream f;
    //f.open("test.txt",ios::out);
    //f << "test:"<< a<< endl;

    //cout<< *p <<endl<< *q<<endl<<q[1]<<endl;

    /*
    ifstream in("Input.txt",ios::in);
    string polygon_num,point_num;
    int num;
    in >>polygon_num;
    in  >>num;
    in >> point_num;
    Point point;
    Point *p;
    in >>point.x>>point.y>>point.z;

    cout<<polygon_num << endl;
    cout<<num << endl;
    cout<<point_num << endl;
    cout<<point.x<<" "<<point.y<<" "<<point.z<<endl;

    p =&point;

    cout<<"test"<<endl;
    cout<<p->x<<" "<<p->y<<" "<<p->z<<endl;
    */

 /*
    Point input[4]={Point(0.0, 0.0, 0.0),Point(120.0, 0.0, 0.0),Point(120.0, 100.0, 0.0),Point(00.0, 100.0, 0.0)};

    Point *a = &input[1];
     cout<<a->x<<" "<<a->y<<" "<<a->z<<endl;
    for(int i=0;i<4;i++)
    {
        cout<<input[i].x<<" "<<input[i].y<<" "<<input[i].z<<endl;

    }
   */



    return 0;
}
