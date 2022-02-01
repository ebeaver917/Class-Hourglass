// Elliot Beaver

// Section 10

class Hourglass
{

public:

   // constructor for hourglass
   // defaults border and fill are '#' and '*' respectively
   // size is a mandatory parameter, and has no default 
   Hourglass(int s, char b = '#', char f = '*');	

   // Accessors, although size is the only one needed in other
   // functions besides summary
   // declared const because none of them actually change the object
   int GetSize() const;
   int Perimeter() const;		     
   double Area() const;	

   // Mutators, Setters change border/fill chars and 
   // Grow and Shrink change size
   char SetBorder(char b);
   char SetFill(char f);
   void Grow();
   void Shrink();

   // Show functions
   void Draw() const;
   void Summary() const;

private:

   char border, fill;

   int size;

};
