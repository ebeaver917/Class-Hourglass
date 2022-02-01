// Elliot Beaver

// Section 10

#include <iostream>
#include <iomanip>
#include <cmath>
#include "hourglass.h"

using namespace std;

Hourglass::Hourglass(int s, char b, char f)
{
   if(s < 1)
   { 
      s = 1;
   }
   else if(s > 39)
   {
      s = 39;
   }

   size = s;

   SetBorder(b);

   SetFill(f);

}

int Hourglass::GetSize() const
{

   return size;

}

int Hourglass::Perimeter() const
{

   return(size * 6);

}
double Hourglass::Area() const
{

   return((sqrt(3) / 4) * pow(size, 2) * 2);

}

char Hourglass::SetBorder(char b)
{

   if(b < 33 || b > 126)
   {
      b = 35;
   }
   
   border = b;

   return border;
}

char Hourglass::SetFill(char f)
{

   if(f < 33 || f > 126) 
   {   
      f = 42;
   }

   fill = f;

   return fill;

}

void Hourglass::Draw() const
{

   int totalSize = (size * 2) - 1;   

   for(int i = 0; i < totalSize; i++)
   {

      int current = i;	// current row being manipulated
      
      // if the current row passes the first triangle, reverse 
      // the rows to mirror the first triangle
      if(i > totalSize / 2)
      {
         current = (totalSize - i - 1);
      }

      for(int j = 0; j < current; j++)
      {
         cout << " ";
      }

      int lastBorder = size - current;	// last character in any row

      for(int k = 0; k < lastBorder; k++)
      {   
         // k represents chars in a row

         char switcher = fill; 		// a varible to toggle border and fill
                                        // characters, so it switches to a border
                                        // on the first row, last row, and edges
     
         if(k == 0 || current == 0 || k == lastBorder - 1)
         {
            switcher = border;
         }

         // originally had an else statement for switcher here, however  
         // initializing switcher on declaration is more efficient 

         cout << switcher << " ";

      }

      cout << '\n';

   }

}

void Hourglass::Grow()
{

   GetSize();

   // Error check for crossing size boundary
   if(size >= 39)
   {
      size = 39;
   }
   else
   {
      size++;
   }

}                                                                               


void Hourglass::Shrink()
{

   GetSize();

   if(size <= 1)
   {
      size = 1;
   }
   else
   {
      size--;
   }

}

void Hourglass::Summary() const
{

   cout << fixed << showpoint << setprecision(2);   

   cout << "Size of the hourglass's side = " << size << " units.\n"; 
   cout << "Perimeter of hourglass = " << Perimeter() << " units.\n";
   cout << "Area of hourglass = " << Area() << " units.\n";
   cout << "The hourglass looks like:\n"; 
   
   Draw();

}
