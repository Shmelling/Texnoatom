//------------------------------------------------------------------
//! @file Stack.cpp
//! Description of stack class
//!
//! @author Schmelling, 2017
//-------------------------------------------------------------------

#include"StacK.h"

//-------------------------------------------------------------------

#include<assert.h>
#include<iostream>
using namespace std;

//----------------------------------------
//! Constructor description
//----------------------------------------
stack::stack():
size_(0), POISON_INIT(12122121)
{
   ;
}

//----------------------------------------
//! Destructor description
//----------------------------------------

stack::~stack()
{
   ;
}

//----------------------------------------
//! The ok() function description
//----------------------------------------

bool stack::ok() const
{ 
 return size_<=capacity;  
}

//----------------------------------------
//! The dump() function description
//----------------------------------------

bool stack::dump() const
{ 
 if(size_<=capacity)
	 cout<<"Stack (ok)\n";
 else
	 cout<<"Stack (ERROR)\n";
 cout<<"   size: "<<size_<<endl;
 cout<<"   capacity: "<<capacity<<endl<<endl;
 cout<<"   data["<<capacity<<"]: \n";
 for(int i=1;i<=capacity;i++)
 {
  if(data_[i]!=(POISON_INIT))
    {
	   cout<<"   *["<<i<<"] ="<<data_[i]<<endl; 
    }
  if(data_[i]==(POISON_INIT))
    {
	   cout<<"    ["<<i<<"] ="<<data_[i]<<" (POISON_INIT)"<<endl; 
    }
 }
 return 0;
}

//----------------------------------------
//! Macro to test object integrity
//----------------------------------------

#define ASSERT()           \
if(!(ok()))                \
{                          \
   dump();                 \
   assert(!"Object is OK");\
}                           

//----------------------------------------
//! The push() function description
//----------------------------------------

bool stack::push(value_type var)
{
   ASSERT();                              // Entry verification
   if(size_>=capacity)
      return false;
   data_[size_++]=var;
   ASSERT();                              // Entry verification
   return true;
}

//----------------------------------------
//! The pop() function description
//----------------------------------------

stack::value_type stack::pop()
{
   ASSERT();                             // Entry verification
   if(size_<=0)
   {
      ASSERT();                          // Entry verification
	  return false;
   }
   else
   {
      ASSERT();                          // Entry verification
	  return data_[--size_];
	  data_[size_]=POISON_INIT;
   }
   
}

//----------------------------------------
//! The top() function description
//----------------------------------------

stack::value_type stack::top()
{
   ASSERT();                             // Entry verification
   if(size_<=0)
   {
      ASSERT();                          // Entry verification
	  return false;
   }
   else
   {
      ASSERT();                          // Entry verification
      size_--;
	  return data_[size_++];
	  ASSERT();                          // Entry verification
   }
}

//----------------------------------------
//! The empty() function description
//----------------------------------------

bool stack::empty()
{  
   ASSERT();                             // Entry verification
   if(size_==0)
   {
	  ASSERT();                          // Entry verification  
      return 1;
   }
   else
	  {
	     ASSERT();                       // Entry verification
		 return 0;
      }
}

//----------------------------------------
//! The get_size() function description
//----------------------------------------

size_t stack::get_size()
{
	ASSERT();                            // Entry verification
	return size_;
}

//----------------------------------------
//! The get_capacity() function description
//----------------------------------------

size_t stack::get_capacity()
{
	ASSERT();                            // Entry verification  
	return capacity;
}
