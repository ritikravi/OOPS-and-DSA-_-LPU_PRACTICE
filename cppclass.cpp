// //wap to create class book to using get_value() calculate() display()
// #include <iostream>
// #include <string>

// using namespace std;
// class book
// {
//   private:

//   string title;
//   int price_page;
//   int no_of_page;
//   int final_price;

//   public:
//   void get_value()
//   {
//     cin>>title>>price_page>>no_of_page;

//   }
//   void calculate()
//   {
//     final_price = price_page*no_of_page;

//   }
//   void display()
//   {
//     cout <<title <<" " <<final_price <<" " <<no_of_page;

//   }

// };
//   int main()
//     {
//     book a1;
//     a1.get_value();
//     a1.display();
//     a1.calculate();
//     }

// #include <iostream>
// #include <string>

// using namespace std;

// struct book
// {
// private:
//     string title;
//     int price_page;
//     int no_of_page;
//     int final_price;

// public:

//     void get_value()
//     {
//         cin >> title >> price_page >> no_of_page;
//     }

//     void calculate()
//     {
//         final_price = price_page * no_of_page;
//     }

//     void display()
//     {
//         cout << title << " " << final_price << " " << no_of_page;
//     }
// };

// int main()
// {
//     book a1;

//     a1.get_value();
//     a1.calculate();
//     a1.display();

//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// class employee
// {
// private:
//     string emp_name;
//     int salary;
//     int id;
//     int bp = 10;

// public:
//     void get_value()
//     {
//         cin >> id >> emp_name >> salary;
//     }

//     void calculate()
//     {
//         if (id > 10)
//         {
//             salary = bp * 6000;
//         }
//         else if (id > 5)
//         {
//             salary = bp * 5000;
//         }
//         else if (id < 5)
//         {
//             salary = 4000;
//         }
//         else
//         {
//             cout << "Invalid id";
//         }
//     }
//     void display()
//     {
//         cout << id << " " << emp_name << " " << salary;
//     }
// };

// int main()
// {
//     employee e;

//     e.get_value();
//     e.calculate();
//     e.display();

//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// class employee
// {
// private:
//     string emp_name;
//     int salary;
//     int id;
//     int bp = 10;

// public:
//     void get_value()
//     {
//         cin >> id >> emp_name >> salary;
//     }

//     void calculate()
//     {
//         if (id > 10)
//         {
//             salary = bp * 6000;
//         }
//         else if (id > 5)
//         {
//             salary = bp * 5000;
//         }
//         else if (id < 5)
//         {
//             salary = 4000;
//         }
//         else
//         {
//             cout << "Invalid id";
//         }
//     }

//     void display()
//     {
//         cout << id << " " << emp_name << " " << salary;
//     }
// };

// int main()
// {
//     employee e;

//     e.get_value();
//     e.calculate();
//     e.display();

//     return 0;
// }

// #include <iostream>

// using namespace std;

// union box
// {

//     int length , breadth;
//     int area;
//     void get_data()
//     {
//         cin >> length ;
//         cin >> breadth;
//         area = length * breadth;

//     }

//     void display()
//     {
//         cout << area << endl;

//     }
// };

// int main()
// {

// box b;
// b.get_data();
// b.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class student
// {
//     int rollno;
//     static int counter;

// public:
//     student()
//     {

//         rollno = 0;
//         rollno++;
//         counter++;
//     }
//     student()
//     {
//         counter--;
//     }
//     void add()
//     {
//         static int getcount();
//     };
//     int student::counter = 0;
//     void student::add()
//     {
//         cout << rollno;
//     }

// }
// call by reference

// #include <iostream>
// using namespace std;
// void swap(int &a, int &b)
// {
//   int temp = a;
//   a = b;
//   b = temp;
// }
// int main()
// {
//     int x = 10, y = 20;
//     cout << "Before swapping: x = " << x << ", y = " << y << endl;
//     swap(x, y);
//     cout << "After swapping: x = " << x << ", y = " << y << endl;
//     return 0;
// }

// //call by value

// #include <iostream>
// using namespace std;
// void swap(int a, int b)
// {
//   int temp = a;
//   a = b;
//   b = temp;
// }

// int main()
// {

// }

// //call by reference
// #include <iostream>
// using namespace std;
//  int main()
//  {
//   int temp=*a;
//   *a=*b;
//   *b=temp;
//   cout<<"After swapping: x = " << *a << ", y = " << *b << endl;
//  }

//  int main()
//  {
// int x=20,y=30;
// cout<<"the value of x and y " << x << " " << y << endl
//  }

// ask the number to enter the number and write a program for factorial of that number using recursion
//  #include <iostream>
//  using namespace std;
//  int factorial(int n)
//  {
//    if (n == 0 || n == 1)
//    {
//      return 1;

//   }
//   else
//   {
//     return n * factorial(n - 1);
//   }

// }
// int main()
// {
//   int n;
//   cin >> n;
//   int result = factorial(n);
//   cout << "Factorial of " << n << " is: " << result << endl;

//   return 0;
// }

// create a class box ,(height,width,depth)private variables ,no value from user
// volume=width*height*depth, use a friend function to calculate the volume of the box and display it

// #include <iostream>
// using namespace std;
// class box
// {
// private:

//     int height;
//     int width;
//     int depth;
//     int volume;

// {
//   public:

// #include <iostream>
// using namespace std;

// class xyz
// {
//   int a;
//   void set_data(int x)
//   {
//     a = x;
//   }
//   friend void max(xyz, abc);
// }

// class abc
// {
//   int a;
//   void set_data(int y)
//   {
//     a = y;
//   }
//   friend void max(xyz,abc);
// };
// void max(abc t1, xyz t2)
// {
//   if (t1.y > t2.x)
//   {
//     cout << t1.y << endl;
//   }
//   else
//   {
//     cout << t2.x << endl;
//   }
// }

// int main()
// {
//   abc t1;
//   xyz t2;
//   t1.set_data(10);
//   t2.set_data(20);
//   max(t1, t2);
//   return 0;
// }

// factorial using recursion
//  #include <iostream>
//  using namespace std;

// int fact(int n){
//   if(n<=1){
//     return 1;
//   }
//   else{
//     return n*fact(n-1);
//   }
// }

// int main(){

//   int number;
//   cin>>number;
//   int res=fact(number);
//   cout<<res;
//   return 0;

// }

// //write a program to find the factorial of fibonaci series up to 10 using recursion

// #include <iostream>
// using namespace std;

// int fib(int n)

// {

//     if (n <= 1)
//     {
//         return n;
//     }
//     else
//     {
//         return fib(n - 1) + fib(n - 2);
//     }
// }

// int main()
// {
//     int number;
//     cin >> number;

//     int res = fib(number);

//     cout << "The Fibonacci number is: " << res << endl;

//     return 0;
// }

// write a program to find the sum of array elements using recursion of fibonaci series

// #include <iostream>
// using namespace std;
// int main(){
//   int n;
//   int arr[]={1,2,3,4,5,6,7,8,9};
//   int n

// }

// bubble sort

// //
// #inlcude < iostream>
// using namespace std;
// class Employee
// {
// public:
//   string name;
//   int salary;
//   void getData()
//   {
//     cin >> name >> salary;
//   }
// };

// void compareSalary(Employee e1, Employee e2)
// {
//   if (e1.salary > e2.salary)
//   {
//     cout << e1.name << " has higher salary than " << e2.name << endl;
//   }
//   else if (e1.salary < e2.salary)
//   {
//     cout << e2.name << " has higher salary than " << e1.name << endl;
//   }
//   else
//   {
//     cout << e1.name << " and " << e2.name << " have equal salary" << endl;
//   }
// }
// int main()
// {
//   Employee emp1, emp2;
//   emp1.getData();
//   emp2.getData();
//   compareSalary(emp1, emp2);
//   return 0;
// }


// #inlcude<iostream>
// using namespace std;
//  inline int  calculate(int length,int breadth){
  
//   return length*breadth;
  
//  }
//  inline int calculatePermineter(int length,int breadth){

//   return  2*(length+breadth);
//  }
//  int main(){
//   int length,breadth;
//   cin>>length>>breadth;
//   int area=calculate(length,breadth);
//   int perimeter=calculatePermineter(length,breadth);
//   cout<<"Area of rectangle is: "<<area<<endl;
//   cout<<"Perimeter of rectangle is: "<<perimeter<<endl;
//   return 0;
//  }
 
// //this pointer
// #include <iostream>
// using namespace std;
// class student
// {
//     int marks;
//     int age;

//     public:
//     void getmarks(int marks)
//     {
//         this->marks = marks;
//     }
//     void getage(int age)
//     {
//         this->age = age;
//     }
//     void display()
//     {
//         cout << "Marks: " << marks << endl;
//         cout << "Age: " << age << endl;
//     }
// };
// int main()
// {
//     student s1;
//     s1.getmarks(20);
//     s1.getage(50);
//     s1.display();
//     return 0;
// }


// //chaning the value of the variable using this pointer
// #include <iostream>
// using namespace std;
// class student
// {
//     int marks;
//     int age;

//     public:
//     void getmarks(int marks)
//     {
//         this->marks = marks;
//     }
//     void getage(int age)
//     {
//         this->age = age;
//     }
//     void display()
//     {
//         cout << "Marks: " << marks << endl;
//         cout << "Age: " << age << endl;
//     }
// student & getage(int age)
//     {
//         this->age = age;
//         return *this;
//     }
// };
// int main()
// {
//     student s1;
//     s1.getmarks(20);
//     s1.getage(50);
//     s1.display();
//     return 0;
// }



// #include <iostream>
// using namespace std;

// class student
// {
//     int marks;
//     int age;

// public:

//     void getmarks(int marks)
//     {
//         this->marks = marks;
//     }

//     student& getage(int age)
//     {
//         this->age = age;
//         return *this;
//     }

//     void display()
//     {
//         cout << "Marks: " << marks << endl;
//         cout << "Age: " << age << endl;
//     }
// };

// int main()
// {
//     student s1;

//     s1.getmarks(20);
//     s1.getage(50);

//     s1.display();
    


//     return 0;
// }

// #include <iostream>
// using namespace std;
// class student{
//     public:
//     int marks;
//     int age;
//     void display(){
//         cout<<"Marks: "<<marks<<endl;
       
//     }

// };
// int main(){
//     student s2;
//     student *ptr=&s2;
//     ptr->marks=90;
//     ptr->display();
//     return 0;
// }


// #include <iostream>
// using namespace std;
//     int main()
//     {
//         int arr[5]={1,2,3,4,5};
//         int *ptr=arr;
//         cout<<*arr<<endl;
//         cout<<arr<<endl;

//         cout<<ptr<<endl;
//         cout<<(ptr)<<endl;

//         for (int i=0;i<5;i++){
//             cout<<*(ptr+i)<<endl;
//         }
//         return 0;
//     }


// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[3] [3]={{1,2,3},{4,5,6},{7,8,9}};
//     int (*ptr)[3]=arr;
//     for (int i=0;i<3;i++){
//         for (int j=0;j<3;j++){
//             cout<<*(*(ptr+i)+j)<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;   
// }

// //write a program from pointer to 3D array and print the elements of the array using pointer
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}};
//     int (*ptr)[2][2] = arr;
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             for (int k = 0; k < 2; k++)
//             {
//                 cout << *(*(*(ptr + i) + j) + k) << " ";
//             }
//             cout << endl;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//     string str="Hello class how are you"    ;
//     string str2="welcome";

//     cout<<str<<endl;
//     cout<<str2<<endl;
//     cout<<str.at(8)<<endl;
//     cout<<str.substr(6,5)<<endl;
//     cout<<str.insert(5,"c++")<<endl;
//     string result1=str+" "+str2;
//     cout<<result1<<endl;
//     cout<<str.append("university")<<endl;
//     cout<<str.erase(5,3)<<endl;
  
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     string st = "Hello class how are you";
//     st=st.push_back('!')<<endl;
//     cout<<st<<endl;
//     st=st.pop_back()<<endl;
//     cout<<st<<endl;
//     return 0;

// }

// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     string st = "Hello class how are you";

//     st.push_back('!');
//     cout << st << endl;

//     st.pop_back();
//     cout << st << endl;

//     return 0;
// }
// //parameterised construtor
// #include <iostream>
// using namespace std;
// class abc
// {
//     public:
//     int val;
//     abc(int x)
//     {
//         val=x;
//     }
//     void display()
//     {
//         cout<<val;
//     }
// };
// int main()
// {
//     abc a1(35);
//     a1.display();
//     return 0;
// }

// // //default constructor
// #include <iostream>
// using namespace std;    
// class sample
// {
//     public:
//     int *x;
//     sample(int a )
//     {
//         x=new int;
//         *x=a;
//     }
// };

// int main()
// {
//   sample obj1(10);
//   sample obj2(20);
  
//   cout<<*obj1.x<<endl;
//   cout<<*obj1.x<<endl;
//   *obj2.x=33;
//   cout<<*obj1.x<<endl;
//   cout<<*obj2.x<<endl;

//   return 0;

// }

// #include <iostream>
// using namespace std;


// class salesData{
//     double rev;
//     int units;
//     public:
//     salesData(double b,int a)
//     {
//         rev=a;
//         units=b;
//     }
// }
// void display Data(){
//     cout<<units<<endl;
//     cout<<fixed<<setprecision(2)<<rev<<endl;
//     double avg=rev/units;
//     cout<<fixed<<setprecision(2)<<avg<<endl;
// };

// #include <iostream>
// using namespace std;
// class demo{
//     int num;
//     public:
//     demo(int n)
//     {
//         num=n;
//         cout<<"Constructor called for object with value: "<<endl;
//     }
// }
// void display()
// {
//     cout<<"Value of num: "<<num<<endl;
//     cout<<sqrt
// }


// #include <iostream>
// #include <fstream>

// using namespace std;

// int main(){
//     ofstream stream1("file3.txt");   
//     if(stream1.is_open() ){
//         stream1<<"Helloworld!! how are you??"<<endl;;

//         stream1.put('A');
//         stream1.put('B');
//         stream1.put('C');


//     }
//     else{
//         cerr<<"error occoured";
//     }
//     stream1.close();
//     return 0;
// }



// #include <iostream>
// #include <fstream>

// using namespace std;

// int main(){
//     ifstream stream2("file3.txt");   
//     string line;
//     if(stream2.is_open() ){
//         getline(cin,line);
//         cout<<line<<endl;


//     }
//     else{
//         cerr<<"error occoured";
//     }
//     stream2.close();
//     return 0;
// }

// overload opertor
// #include <iostream>
// using namespace std;
// class number
// {
//     int value;
//     public:
//     number(int v)
//     {
//         value=v;
//     }
//     void display()
//     {
//         cout<<value<<endl;
//     }

// };
// void operator++(){
    
//     value++;
// }
// int main()
// {
//     number n1(10);
//     n1.display();
//     ++n1;
//     n1.display();
//     return 0;
// }   

// #include <iostream>
// using namespace std;
// class number
// {
//     int value;
//     public:
//     number(int v)
//     {
//         value=v;
//     }
//     number operator+(const number &b)
//     {
//         return number(value+b.value);
//     }
//     void display()
//     {
//         cout<<value<<endl;
//     }
// };
// int main()
// {
//     number n1(5);
//     number n2(10);
//     number n3=n1+n2;
//     n3.display();
//     return 0;
// }   



// #include <iostream>
// #include <string>
// using namespace std;

// class cat
// {
// public:
//     string s;

//     cat(string str)
//     {
//         s = str;
//     }

//     cat operator+(const cat& other)
//     {
//         return cat(s + other.s);
//     }
// };

// int main()
// {
//     cat s1("Hello ");
//     cat s2("Bro");

//     cat s3 = s1 + s2;

//     cout << s3.s;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// class time
// {
//     int hours;
//     int minutes;
//     public:
//     time()
//     {
//         hours=0;
//         minutes=0;

//     }
//     time(int total)
//     {
//         hours=total/60;
//         minutes=total%60;
//     }
//     void display()
//     {
//         cout<<"hours"<<"minutes"<<endl;


// }
// };
// int main(){
//     int duration;
//     duration=90;
//     time t1=duration;
//     time t2=(time)130;
//     time t3=70;
//     cout<<t1.display();
//     cout<<t2.display();
//     cout<<t3.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class distance
// {
//     int feet;
//     int inches;
//     public:
//     distance()
//     {
//         feet=0;
//         inches=0;
//     }
//     distance(int d)
//     {
//         feet=d/12;
//         inches=d%12;
//     }
    
//     void display()
//     {
//         cout<<feet<<"'"<<inches<<"\""<<endl;
//     }


    
// };
// int main()
// {
//     int f,i;
//     cin>>f>>i;
//     distance d1(f,i);
//     d1.display();

//     cout<<"Enter distance in inches: ";
//     int total_inches;
//     cin >> total_inches;
//     distance d2(total_inches);
//     d2.display();
//     return 0;

   
// }



// #include <iostream>
// using namespace std;
// class time
// {
//     int hours;
//     int mins;
//     public:
//     time(int a,int b)
//     {
//         hours=a;
//         mins=b;
        
//     }
// operator int()
//     {
//         return hours*60+mins;
//     }
// };
    
//    int main()
//    {
//     time_t t1(1 ,30);
//     int duration;
//     duration=t1;
//     cout<<" "<<duration<<endl;
//     return 0;

//    }

// #include <iostream>
// using namespace std;

// class kg
// {
//     int kilogram;

// public:
//     kg(int a)
//     {
//         kilogram = a;
//     }

//     operator int()
//     {
//         return kilogram * 1000;
//     }
// };

// int main()
// {
//     kg k1(5);
//     int gram;

//     gram = k1;

//     cout << " " << gram << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class celcius
// {
//     double celsius;



// public:
//     celcius(double a)
//     {
//         celsius = a;
//     }

//     operator double()
//     {
//         return 5/9 * celsius + 32;
//     }
// };

// int main()
// {
//     celcius c1(32.7);
//     double fahrenheit;

//     fahrenheit = c1;

//     cout << " " << fahrenheit << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class animal{
//     public:
//     int value;
//     animal(){
//         value=10;

//     }
//     void display(){
//         value++;
//         cout<<"the updtaed values are:"<<value<<endl;

//     }

// };
// class dog:public animal{
//     public:
//     void print(){
//         value++;
//         cout<<"the updtaed values are:"<<value<<endl;

//     }
// };
// int main(){
//     dog d1;
//     d1.display();
//     d1.print();
//     return 0 ;

// }


// #include <iostream>
// using namespace std;

// class animal{
//     public:
//     int value;
//     animal(){
//         value=10;
//         value++;

//     }
 
 
// };
// class dog:public animal{
//     public:
//     dog(){
//         value++;
//         cout<<"the updtaed values are:"<<value<<endl;
//   }
// };

// int main(){
//     dog d1;
//     return 0 ;

// }




// #include <iostream>
// using namespace std;

// class animal{
//     public:
//     int value;

//     void display(){
//         value=10;
//         value++;
//         cout<<"the updtaed values are:"<<value<<endl;

//     }

// };
// class dog:public animal{
//     public:
//     void read(){
//         value++;
//         cout<<"the updtaed values are:"<<value<<endl;

//     }
// };
// class germanshephard:public dog{
//     public:
//     void print(){
//         value++;
//         cout<<"the updtaed values are:"<<value<<endl;

//     }

// };
// int main(){
//     germanshephard d1;
//     d1.display();
//     d1.read();
//     d1.print();
    
//     return 0 ;

// }

#include <iostream>
using namespace std ;

class shape{
    public:
    int line;
    int radius;
     
    void display(){
        cout<<"the perimeter and circumference are listed below:"<<endl;


    }
};

class square:public shape{
    public:
    void perimeter(){
        line =12;
        cout<<"the perimeter of teh square is :"<<4*line<<endl;

    }
};
class circle:public square{
    public:
    void circumference(){
        radius =3;
        cout<<"the circumference of the circle is :"<<2*3.14*radius<<endl;
    }
};

int main(){
    square s1;
    s1.display();
    s1.perimeter();
    circle c1;
    c1.display();
    c1.circumference();
    return 0;

}