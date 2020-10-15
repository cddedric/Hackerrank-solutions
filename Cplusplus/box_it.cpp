/*
https://www.hackerrank.com/challenges/box-it/
*/


//Implement the class Box  

class Box{
    private:
    int l, b, h;    //l,b,h are integers representing the dimensions of the box

    public:
// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);
    Box(){
        l=b=h=0;
    }
    Box(int length, int breadth, int height){
        l = length;
        b = breadth;
        h = height;
    }
    Box(const Box& B){  // copy box using box's reference values upon creation
        l = B.l;
        b = B.b;
        h = B.h;
    }

// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box
    int getLength(){
        return l;
    }
    int getBreadth(){
        return b;
    }
    int getHeight(){
        return h;
    }
    long long CalculateVolume(){
        return (long long)l*b*h; //long long to make change type
    }

//Overload operator < as specified
//bool operator<(Box& b)
    friend bool operator < (Box& A, Box& B){    // friend to overwrite the less than operator when used on the Box class and pass it the two box references for comparison
        if ( (A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h < B.h) && (A.l ==B.l) && (A.b == B.b)) ){    //giant logic as described in the problem instructions
            return true;
        }       //close if
            else{
                return false;
            }

    };  //close the friend bool operator <


//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)
    friend ostream& operator<< (ostream& out, const Box& B){
        std::string space = " ";
        out << B.l << space << B.b << space << B.h;
        return out;
    }
};
