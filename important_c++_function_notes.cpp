stoi( ) ## string to integer


vector<int> a(n); ## allocating n size vector int

//  creating max heap / min heap respectively
priority_queue <int> max_heap ;
priority_queue<int , vector<int> ,greater<int>> min_heap ;
// ------------------------------------------------------------------------------------
 // example for arbitrary priority queue
// User defined class, Point
class Point
{
   int x;
   int y;
public:
   Point(int _x, int _y)
   {
      x = _x;
      y = _y;
   }
   int getX() const { return x; }
   int getY() const { return y; }
};
 
// To compare two points
class myComparator
{
public:
    int operator() (const Point& p1, const Point& p2)
    {
        return p1.getX() > p2.getX();
    }
};
 
// Driver code
int main ()
{
    // Creates a Min heap of points (order by x coordinate)
    priority_queue <Point, vector<Point>, myComparator > pq;
 
    // Insert points into the min heap
    pq.push(Point(10, 2));
    pq.push(Point(2, 1));
    pq.push(Point(1, 5));
 
    // One by one extract items from min heap
    while (pq.empty() == false)
    {
        Point p = pq.top();
        cout << "(" << p.getX() << ", " << p.getY() << ")";
        cout << endl;
        pq.pop();
    }
 
    return 0;
}

// ================================================================================================

// initialise vector with sturctures like this
vector <struct node > x ={{0,"a"},{1,"b"},{3,"a"}};
	// or 
x.push(struct_name());
x[i].something = somehting_else ;

// comparator is already a function in c++ donot overload this function  or use this function 
// it can only be used to write comparsion for ints etc .. 
//  it may not work in some environments


stoi()#  string to integer 
stol() # string to long
to_string( 9 )  # converts integer to string 


# maximum subarray problem 
greedy algorithm O(nlong (n))
kadane algorithm  (https://www.youtube.com/watch?v=ohHWQf1HDfU&feature=youtu.be)


// There are two types of memory named heap and stack
  // stack stores functions call and local variables 
  // heap memory is larger than stack and stores the dynamic memory demand for by using new  

// return objects from functions if the object is large then return the pointer to it created by new otherwise the local variables
  // are being destroyed as they go out of the scope but memory allocated by new is not deleted until delete variable_name is being called 

/* for creating array of objects by new like
   Animal* p = new Animal[5];

   delete [] p ;

*/
   using namespace std  # is used to remove the conflict of all variable ,function,constant with same name 
   using namespace inside static libraries is not prefered because if that static library has included that namespace then 
   it will also be include into your current if you imported .

// encapsulation  (data memeber + member function ) used to have data hiding from end user 

// calling constructors in inherited and they are not inherited 
// so for calling constructor of super class call it like

   
// by default member function are private

Cat(age):Animal(age){} # calling the Animal(age) constructor of Animal class 


// polymorphism is the ability to redefine the methods of the base class in the derived class by using virtual keyword 
// virtual for all function and destructor for the base class for override 

Animal *ptr = new Cat()   # pointing to derived class but if virtual is used then it overrides the other base class 

// ============================ operator overloading in the class ==========================================
// example 1)
className operator symbol ( className const &other){
  className res ;
  return res ;  //because the return type was a class object 
}
// exampe 2
void operator ++() 
{ 
          count = count+1; 
}



pond to remember 
<sstream>  stringstream
Cat::Cat(string name):name(name),age(age){}

reference variable
int &value = value1 ;

const int * ptr ;  *ptr cannot change
int * const ptr ;  ptr =&int cannot be done 

copy constructor for one object to another 
Animal animal1 =animal2  ;//constructor is not called 
//copy constructor
Animal(const animal & other ){}   //https://courses.caveofprogramming.com/courses/2087/lectures/39900
cannot call non constant methods otherwise we can change the other instance field


// static library are the libraries that become the part of the code when you compile so the compiled output contains 
// the libraries attached to it but dynamic libraries does not added to compiled output 


/*       ----------------------for linking static libraries------------------------------
INCLUDEPATH +="/media/mabrin/myfiles/codes/mylib/"   

LIBS += "/media/mabrin/myfiles/codes/build-mylib-Desktop-Debug/libmylib.a"
HEADERS += \
    ../mylib/mylib.h
*/