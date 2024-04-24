#include<iostream>
using namespace std;

class shap
{
	public:
		virtual void calculate() = 0;
};

class Circle : public shap 
{
	protected:
		float radius;
	public:
		Circle(float num)
		{
			radius=num;
		}
		
		void calculate() 
		{
			cout << "Area of Circle: " << 3.14* radius* radius << endl;
		}
};

class Triangle : public shap 
{
	protected:
		float base, height;
	public:
		Triangle(float b,float h) 
		{
			base=b;
			height=h;
		}
		void calculate() 
			{
				cout << "Area of Triangle: " << base * height / 2 << endl;
			}
};

class Rectangle : public shap 
{
	protected:
		float length, width;
	public:
		Rectangle(float l,float w) 
		{
			length=l;
			width=w;
		}
		void calculate() 
		{
			cout << "Area of Rectangle: " << length * width << endl;
		}
};

int main() 
{
	float radius;
	
	cout<<"enter radius of circle:-";
	cin>>radius;
	
	Circle circle(radius);
	circle.calculate();
	cout<<endl;
	
	float base,height;
	
	cout<<"enter base of triangle:-";
	cin>>base;
	cout<<"enter height of triangle:-";
	cin>>height;
	
	Triangle triangle(base,height);
	triangle.calculate();
	cout<<endl;
	
	float length,width;
	
	cout<<"enter lenght of rectengle:-";
	cin>>length;
	cout<<"enter widht of rectengle:-";
	cin>>width;
	
	
	Rectangle rectangle(length,width);
	rectangle.calculate();
	cout<<endl;
	
	return 0;
}
