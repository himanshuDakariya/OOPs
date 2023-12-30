// shopping class:::::::::::::::::::::::::::::::::::
// #include <iostream>
// using namespace std;

// class distance{
// public:
//     int km,m;
//     void getdist(){
//         cout<<"Enter distance: "<<endl;
//         cin>>km>>m;
//         }
//     void showdist(){
//         cout<<km<<"Km "<<m<<" m"<<endl;

//     }
//     distance add(distance d1, distance d2){
//         distance d3;
//         d3.km=d1.km+d2.km;
//         d3.m=d1.m+d2.m;
//         if(d3.m>1000){
//             d3.km+=1;
//             d3.m-=1000;
//         }
//         return(d3);
//     }

// }d1,d2,c;
// int main(){
//     d1.getdist();
//     d2.getdist();
//     c=c.add(d1,d2);

//     c.showdist();
// }

// #############################################################################
// Points class

// #include <iostream>
// #include<cmath>
// using namespace std;

// class Points{
//     public: friend void getdist();
//     int x,y;

//     Points(int a,int b){
//         x=a;
//         y=b;
//         }
//     void displaypoints(){
//         cout<<"("<<x<<","<<y<<")"<<endl;
//         }

// };

// void getdist(Points a1,Points a2){
//         float distance=0;
//         distance=pow(pow((a2.x-a1.x),2)+pow((a2.y-a1.y),2),0.5);
//         cout<<"Distance is: "<<distance<<endl;
//         }
// int main(){
//     Points p(2,4);
//     Points q(3,2);
//     getdist(p,q);

// default argumets#############################################################3
// #include <iostream>
// using namespace std;

// class simple{
// public:
//     int x,y,z;
//     simple(int a,int b=3,int c=5){
//         x=a;
//         y=b;
//         z=c;
//     }
//     void print(){
//         cout<<"x: "<<x<<endl;
//         cout<<"y: "<<y<<endl;
//         cout<<"z: "<<z<<endl;
//     }
// }
// ;
// int main(){
//     simple s(2);
//     s.print();

//     return 0;
// }

// #####################################################################
// Bank deposit class

// #include <iostream>
// using namespace std;

// class Bankdeposit
// {
// public:
//     int principal;
//     int years;
//     float rate;
//     float freturn;

//     Bankdeposit()
//     {

//     }
//     Bankdeposit(int p, int y, float r = 0.07)
//     {
//         principal = p;
//         years = y;
//         rate = r;
//         freturn = principal;
//         freturn=freturn+(principal*rate*years);
//         }
//     Bankdeposit(int p, int y, int R)
//     {
//         principal = p;
//         years = y;
//         rate = R;
//         freturn = principal;
//         freturn=freturn+(principal*rate*years)/100;
//     }

//     void show()
//     {
//         cout << "The Principal Amt : " << principal << endl
//              << "deposited for : " << years << endl
//              << "Total returning Amt :" << freturn << endl;
//     }
// };

// int main()
// {
//     Bankdeposit bd1, bd2, bd3;
//     long int p;
//     int y;
//     int R;
//     float r;
//     cout <<"Enter the P,Y,r(in decimal)"<< endl;
//     cin >> p >> y >> r;

//     bd1 = Bankdeposit(p, y, r);
//     bd1.show();

//     cout <<"Enter the P,Y,R(in %)"<< endl;
//     cin >> p >> y >> R;

//     bd2 = Bankdeposit(p, y, R);
//     bd2.show();

//     cout << "Enter P and Y" << endl;
//     cin >> p >> y;

//     bd3 = Bankdeposit(p, y);
//     bd3.show();

//     return 0;
// }

// ######################################################################
//  copy constructor

// #include <iostream>
// using namespace std;

// class Number
// {
//     int a;

// public:
//     Number(int num)
//     {
//         a = num;
//     }
//     Number(Number &obj){
//         cout<<"I m here"<<endl;
//         a=obj.a;
//     }

//     void display()
//     {
//         cout << "The number associated with this object is : " << a << endl;
//     }
// };

// int main()
// {
//     Number n1(5);
//     n1.display();
//     Number n2(n1);
//     n2.display();
//     Number n3 = n2;
//     n3.display();
//     return 0;
// }
// ##########################################################################

// --------------------------------------------------------------------------
// to be modified ::: book example..

// #include <iostream>
// using namespace std;
// class matrix{
//     int **p;
//     int d1,d2;
// public:
//     matrix(int x,int y){
//         d1=x;
//         d2=y;
//         p=new int *[d1];
//         for(int i=0;i<d1;i++){
//             p[i]=new int[d2];
//         }
//     }
//     void getelement(int i,int j,int value){
//         p[i][j]=value;
//     }
//     int & putelement(int i,int j){
//         return p[i][j];
//     }

// };
// int main(){
//     int m, n;
//     cout<<"Enter size:"<<endl;
//     cin>>m>>n;

//     matrix A(m,n);
//     cout<<"Enter values row-wise"<<endl;

//     int value;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>value;
//             A.getelement(i,j,value);
//         }
//        cout<<""<<endl;

//     }
//     cout<<A.putelement(1,2);

//     return 0;
// }

// ####################################################################

// NON DUPLICATED ARRAY CREATION.............

// #include <iostream>
// using namespace std;

// int occur(int arr1[], int len, int x)
// {
// 	int count = 0;

// 	for (int i = 0; i < len; i++)
// 	{
// 		if (arr1[i] == x)
// 		{
// 			count++;
// 		}
// 	}
// 	return count;
// }

// int main()
// {
//     int s;
//     cout<<"Enter size of array: ";
//     cin>>s;
//     int arr[s];
//     int s1[s];
//     int farr[s];
//     for(int i=0;i<s;i++){
//         cout<<"Enter "<<i+1<<" value :"<<endl;
//         cin>>arr[i];
//     }

//     for(int i=0;i<s;i++){
//         s1[i]=arr[i];
//         if(occur(s1,s,arr[i])==1){
//             farr[i]=arr[i];
//         }
//         else{
//             farr[i]=0;
//         }

//     }
//     cout<<"Non duplicated array is : "<<endl;
//     for(int i=0;i<s;i++){

//         cout<<farr[i]<<" ";
//     }

// 	return 0;
// }

// #include <iostream>
// using namespace std;
// int count=0;
// class Number{
// public:
//     Number(){                                              //constructor
//         count++;
//         cout<<"Number of objects created "<<count<<endl;}
//     ~Number(){
//         cout<<"Last object is destroyed "<<endl;           //destructor
//         count--;
//         cout<<"Number of objects remained: "<<count<<endl;
//     }

// };

// int main(){
//     cout<<"Entered int main()"<<endl;
//     Number n1,n2,n3;
//     {
//         cout<<"Entered block1"<<endl;
//         Number n4;
//     }
//     {
//         cout<<"Entered block2"<<endl;
//         Number n5;
//     }
//     cout<<"Entered int main() again..."<<endl;

//     return 0;
// }




// matrix:
// #include <iostream>
// using namespace std;

// int printmat(int matrix1[][],int rows1,int cols1,int matrix2[][],int rows,int cols){
//     cout << "The matrix1 is: " << endl;
//     for (int i = 0; i < rows1; i++)
//     {
//         for (int j = 0; j < cols1; j++)
//         {
//             cout << matrix1[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << "The matrix2 is: " << endl;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << matrix2[i][j] << " ";
//         }
//         cout << endl;
//     }

// }

// int main()
// {
//     int rows, cols;
//     cout << "Enter number of rows and columns:" << endl;
//     cin >> rows >> cols;
//     int matrix1[rows][cols];
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << "Enter the value of: a" << i << j << endl;
//             cin >> matrix1[i][j];
//         }
//     }

//     cout << "Enter number of rows and columns:" << endl;
//     cin >> rows >> cols;
//     int matrix2[rows][cols];
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             cout << "Enter the value of: a" << i << j << endl;
//             cin >> matrix2[i][j];
//         }
//     }

//     printmat(matrix1,3,3,matrix2,3,3);

//     return 0;
// }





// #include <iostream>
// using namespace std;

// class Base{
//     int data1;
// public:
//     int data2;
//     void setdata(){
//         data1=10;
//         data2=20;
//     }
//     int getdata1(){
//         return data1;
//     }
//     int getdata2(){
//         return data2;
//     }

// };
// class Derived:public Base{
//     int data3;
// public:
//     int process(){
//         return data3=data2*getdata1();

//     }
//     void display(){
//         cout<<"data1: "<<getdata1()<<endl;
//         cout<<"data2: "<<data2<<endl;
//         cout<<"data3: "<<data3<<endl;

//     }
//     void get1(){
//         cout<<getdata1();
//     }
// };

// int main(){
//     Derived d;
//     d.setdata();
//     d.process();
//     d.display();
//     d.get1();

//     return 0;
// }

// ################################################################3
//  class inheritance

// #include <iostream>
// using namespace std;

// class B{
//     int a;
// public:
//     int b;
//     void getab(){a=5; b=10;};
//     int geta(){return a;}
//     void showa(){cout<<"a is "<<a<<endl;}
// };
// class D:public B{
//     int c;
// public:
//     void mul(){c=geta()*b;}
//     void display(){cout<<"a = "<<geta()<<endl;
//                     cout<<"b = "<<b<<endl;
//                     cout<<"c = "<<c<<endl;}

// };

// int main(){
//     D d;

//     d.getab();
//     d.mul();
//     d.showa();
//     d.display();

//     d.b=2;
//     d.mul();
//     d.display();

//     return 0;
// }

// ####################################################################
//   private protected inheritance:

// #include <iostream>
// using namespace std;

// class A
// {
// private:
//     int x;

// protected:
//     int y;

// public:
//     A()
//     {
//         x = 5;
//         y = 4;
//     }

//     friend class B;
// };
// class B
// {
// public:
//     void display(A &a1)
//     {
//         cout << "x is :" << a1.x << endl;
//         cout << "y is :" << a1.y << endl;
//     }
// };

// int main()
// {
//     A a;
//     B b;
//     b.display(a);
// }

// ###############################################################

// multilevel inheritance:

// #include <iostream>
// using namespace std;

// class Students
// {
// protected:
//     int roll;

// public:
//     void setroll(int r)
//     {
//         roll = r;
//     }
//     int getroll()
//     {
//         return roll;
//     }
// };

// class Exams : public Students
// {
// protected:
//     int maths;
//     int physics;

// public:
//     void setmarks(int x, int y)
//     {
//         maths = x;
//         physics = y;
//     }
//     void getmarks()
//     {
//         cout << "Maths: " << maths << endl;
//         cout << "Physics: " << physics << endl;
//     }
// };
// class Result : public Exams
// {
//     float percent;

// public:
//     void display()
//     {
//         cout << "Roll number: " << getroll() << endl;
//         getmarks();
//         cout << "Percentage obtained: " << (maths + physics) / 2 << "%" << endl;
//     }
// };

// int main()
// {
//     Result anshu;
//     anshu.setroll(22523);
//     anshu.setmarks(99, 100);
//     anshu.display();

//     return 0;
// }

// ---------------------------------------------------------------------
// Multiple inheritance...

// #include <iostream>
// using namespace std;

// class Base1{
//     protected:
//         int a;
//     public:
//         void setdata1(int x){
//             a=x;
//         }
// };
// class Base2{
//     protected:
//         int b;
//     public:
//         void setdata2(int x){
//             b=x;
//         }
// };

// class Derived:public Base1, public Base2{
//     public:
//         void display(){
//             cout<<"a is: "<<a<<endl;
//             cout<<"b is: "<<b<<endl;
//             cout<<"Sum is: "<<a+b;
//         }

// };

// int main(){
//     Derived d;
//     d.setdata1(5);
//     d.setdata2(2);
//     d.display();

//     return 0;
// }

// ###################################################################

// Virtual base class example................

// #include <iostream>
// using namespace std;

// class Students{
//     protected:
//         int roll;
//     public:
//         void setroll(int x){
//             roll=x;
//         }
//         int getroll(){
//             return roll;
//         }

// };
// class Test:public virtual Students{
//     protected:
//         int sub1,sub2;
//     public:
//         void setmarks(int x,int y ){
//             sub1=x;
//             sub2=y;

//         }
//         void getmarks(){
//             cout<<"Sub1: "<<sub1<<endl;
//             cout<<"Sub2: "<<sub2<<endl;
//         }

// };
// class Internal:public virtual Students{
//     protected:
//         int a,b;
//     public:
//         void givemarks(int x,int y){
//             a=x;
//             b=y;

//         }
//         void showinternals(){
//             cout<<"Internal marks in sub1: "<<a<<endl;
//             cout<<"Internal marks in sub2: "<<b<<endl;
//         }
// };
// class Result:public Test , public Internal{

// public:
//     void display(){
//         cout<<"Roll no. "<<getroll()<<endl;
//         getmarks();
//         showinternals();

//     }
// };
// int main(){
//     Result anshu;
//     anshu.setroll(22523);
//     anshu.setmarks(70,70);
//     anshu.givemarks(30,30);
//     anshu.display();

//     return 0;
// }

// ###############################################################

// #include <iostream>
// using namespace std;

// class integer{
//     int m,n;
// public:
//     integer(void);
// };

// integer::integer(void){
//     m=0; n=0;
// }

// int main(){
//     integer i;
//     cout<<i.m;

//     return 0;
// }
// ----------------------------------------------------------------------------------
// #########Constructor in Derived class

// #include <iostream>
// using namespace std;
// class Base1{
//     protected:
//         int a1;
//     public:
//         Base1(int x){
//             a1=x;
//         }

//         void displaybase1(){
//             cout<<"Base1 constructor called"<<endl;
//             cout<<"The value a1: "<<a1<<endl;
//         }

// };
// class Base2{
//     protected:
//         int a2;
//     public:
//         Base2(int x){
//             a2=x;
//         }
//         void displaybase2(){
//             cout<<"Base2 constructor called"<<endl;
//             cout<<"The value a2: "<<a2<<endl;
//         }

// };
// class Derived:public Base1,public Base2{
// public:
//     int derived1,derived2;

//     Derived(int p,int q,int r,int s):Base1(p),Base2(q){

//         derived1=r;
//         derived2=s;
//     }

//     void displayderived(){
//         cout<<"derived constructor called"<<endl;
//         cout<<"derived1= "<<derived1<<endl;
//         cout<<"derived2= "<<derived2<<endl;
//     }
// }

// ;
// int main(){

//     Derived d1(1,2,3,4);
//     d1.displaybase1();
//     d1.displaybase2();
//     d1.displayderived();

//     return 0;
// }

// ######################################################

// ### constructor in derived class ###

// #include <iostream>
// using namespace std;

// class alpha{
//     int x;
// public:
//     alpha(int i){
//         x=i;

//     };
//     void showx(){
//         cout<<x<<endl;
//     }
// };
// class beta{
//     int a,b;
// public:
//     beta(int p,int q):a(p),b(q+a){

//     }
//     void showa(){
//         cout<<a<<endl;

//     }
//     void showb(){
//         cout<<b<<endl;
//     }
// };

// class gamma:public beta, public alpha{
//     int u,v;
// public:
//     gamma(int m,int n,int l):alpha(m*2),beta(l,l),u(m){
//         v=n;

//     }
//     void showu(){
//         cout<<u<<endl;
//     }
//     void showv(){
//         cout<<v<<endl;
//     }

// };

// int main(){
//     gamma g(2,4,3);
//     g.showx();
//     g.showa();
//     g.showb();
//     g.showu();
//     g.showv();
//     return 0;
// }

// ####################################################################

// ############ Nested class #############

// #include <iostream>
// using namespace std;

// class Student{
//     int roll;
//     string name;
//     public:
//         class Address{
//             string house;
//             string city;
//             string state;

//             public:
//                 void setAddress(string h,string c, string s){
//                     house=h;
//                     city=c;
//                     state=s;
                    
//                 }
//                 void showAddress(){
//                     cout<<"Address :"<<endl;
//                     cout<<"House "<<house<<endl<<"city "<<city<<endl<<"state "<<state<<endl;

//                 }

//         };
//         Address add;

//         void setadd(string h,string c, string s){
//             add.setAddress(h,c,s);
//         }

//         void setroll(int x){
//             roll=x;
//         }
//         void setname(string n){
//             name=n;
//         }

//         void display(){
//             cout<<"Name: "<<name<<endl<<"Roll no: "<<roll<<endl;
//             add.showAddress();
//         }



// };

// int main(){
//     Student s;
//     s.setroll(22523);
//     s.setname("Himanshu");
//     s.setadd("70/2","Betul","M.P");
//     s.display();
    
   
//     return 0;
// }
// -----------------------------------------------------------------------------

// Templates in c++

// #include <iostream>
// using namespace std;
// template <class T> 
// class A{
//     T a;
//     T b;
//     public:
//         A(T i,T j):a(i),b(j){

//         }
//         void getsum(){
//             cout<<a+b<<endl;
//         }
// }
// ;
// int main(){
//     A <float> a1(5.6,6.6);
//     a1.getsum();

    
//     return 0;
// }
// ###################################################################

                                // #include <iostream>
                                // #include<vector>
                                // using namespace std;



                                // int main(){
// vectors
                                //     vector <int> v1{1,1,2,123456};


                                //     for(int i=0;i<v1.size();i++){
                                //         cout<<v1[i]<<endl;
                                //     }

                                    
                                //     return 0;
                                // }
// ####################################################################


// #include <iostream>
// using namespace std;

// class vector{
//     int *v;
//     int size;
// public:
//     vector(int m){
//         v=new int[size=m];
//         for(int i=0;i<size;i++){
//             v[i]=0;
//         }
//     }
// }

// int main(){
    
//     return 0;
// }


// ===================================================================================

// ****************************pointer objects****************************************


// #include <iostream>
// using namespace std;
// class Student{
//     int roll;
//     string name;

// public:
//     void setroll(int x){
//         roll=x;
//     }
//     void setname(string x){
//         name=x;
//     }
//     void getdata(){
//         cout<<"Name : "<<name<<endl;
//         cout<<"Roll : "<<roll<<endl;
        
//     }
// };

// int main(){
//     Student anshu;
//     Student *a=new Student[3];
    
//     (*a).setname("HmanshuDakariya" );
//     (*a).setroll(22523);
//     (*a).getdata();

//     (*(a+1)).setname("raju");
//     (*(a+1)).setroll(22524);
//     (*(a+1)).getdata();

//     (*(a+2)).setname("kaju");
//     (*(a+2)).setroll(22525);
//     (*(a+2)).getdata();
//       return 0;
// }


// #include <iostream>
// using namespace std;

// class item{
//     int code;
//     int price;
// public:
//     void setdata(int i,int j){
//         code=i;
//         price=j;
//     }
//     void getdata(){
//         cout<<"code "<<code<<endl;
//         cout<<"price "<<price<<endl;
//     }
// };

// int main(){
//     item *ptr=new item[3];
//     item *p=ptr;

//     int i,x;
//     float y;

//     for(i=0;i<3;i++){
//         cout<<"Enter itmcode and price: "<<endl;
//         cin>>x>>y;
//         ptr->setdata(x,y);
//         ptr++;    }
//     cout<<"------------------------"<<endl;
//     for(i=0;i<3;i++){
//         cout<<"Item "<<i+1<<endl;
//         p->getdata();
//         p++;
//     }

    
//     return 0;
// }



// ############################## chota count;;;;######################################






// #include <iostream>
// using namespace std;


// int main(){
//     int count=0;

//     string x="himanshu";
//     for(int j: x){
//         count++;

//     }
//     cout<<count;

//     return 0;}


// ------------------------------------------------------------------------

// -----------------Exception handling------------------------

// #include <iostream>
// using namespace std;

// int main(){
//     int a = 7;
//     int b = 0;
//     // cin>>a>>b;

//     float x;
//     try{
//         // if(b!=0){
//             x=a/b;
//             cout<<"Prog. executed: "<<x<<endl;
//         // }
//         // else{
//             // a/b
//             throw(b);
//         // }
//     }
//     catch(int i){
//         cout<<"Exception caught: Divide by "<<i<<endl;
//     }
//     cout<<"END";
//     return 0;
    
// }   

// ---------------------------------------------------------

// -------------- Multiple catch -----------------------


// #include <iostream>
// using namespace std;
// void test(int x){
//     try{
//         if(x==1){
//             throw(x);
//         }
//         else if(x==0){
//             throw('x');
//         }
//         else if(x==-1){
//             throw(1.5);
//         }
//     }
    
//     catch(...){
//         cout<<"Exception caught!"<<endl;
//     }
// }

// int main(){

//     test(1);
//     test(0);
//     test(-1);
    
//     return 0;
// }

// -----------------------------------------------------------------



// #include <iostream>
// using namespace std;

// class Error{
//     //Empty()class.... 
// };
// void product(int a,int b){
//     if(a==0||b==0){
//         throw(Error()); 
//     }
//     cout<<"Product ="<<a*b;

// }

// int main(){

//     try{
//         product(5,2);

//     }
//     catch(Error &e){
//         cout<<"Error caught.  . ..";
//     }
    
//     return 0;
// }


// ------------------------------------------------


// -------------------------------------------------------

// #include <iostream>
// using namespace std;

// int main(){
//     // int arr1[2][2] = {{1,1},{1,1}};
//     // int arr2[2][2] = {{1,1},{1,1}};
//     // int prod[2][2] = {{0,0},{0,0}};
//     for (int i = 0; i <2; i++) 
//     {
//         for (int k = 0 ; k < 2 ; k ++)
//         {
//             int ele = 0;
//         for (int j = 0; j<2; j++)
//         {
//             ele += arr1[i][j] * arr2[j][i];
//         }
//         prod[i][k] = ele;
//         }
//     }
//     for (int i = 0; i < 2 ; i ++)
//     {
//         for (int j =0; j <2; j++)
//         {
//             cout<<prod[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// 
// #include <iostream>
// using namespace std;

// class A{
//     int x;
//     public:
   
//     A(int w){
//         x=w;
//     }
//     A(A &o){
//         o.x=x;

//     }
//     void display()
//     {
//         cout<<x;
//     }
// };

// int main(){
//     A p(4);
//     p.display();
//     A y = p;
//     y.display();





//     return 0;
// }






//  not in practical           BUBBLE SORTING OF ARRAY
// ****************************************************************************************

//                               #include <iostream>
//                               #include<cstring>
//                               using namespace std;

//                               int main(){
//                                   int i,j,temp;

//                                   int a[]={2,4,6,3,1};

//                                   for(int i=0;i<5;i++){
//                                       for(int j=0;j<4;j++){
//                                           if(a[j]>a[j+1]){
//                                               temp=a[j];
//                                               a[j]=a[j+1];
//                                               a[j+1]=temp;
//                                           }
//                                       }

//                                   }

//                                   for(int i=0;i<5;i++){
//                                       cout<<a[i]<<" ";
//                                   }

//                               }

// ---------------------------------------------------------------------