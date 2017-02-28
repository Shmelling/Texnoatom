//------------------------------------------------------------------
//! @file TEST.cpp
//! Tests a stack class
//!
//! @author Schmelling, 2017
//-------------------------------------------------------------------

#include"Stack.h"

//----------------------------------------
//! A macro to write the name of class being tested and name of the test
//! @what parameter is a text expression
//! @cause parameter is a text expression
//----------------------------------------

#define TEST(what, cause)                                \
	printf("Name of the class: " #what);printf("\n");    \
    printf("Name of the TEST: " #cause);printf("\n");

//----------------------------------------
//! A macro to check the condition
//! @condition parameter is a text expression
//----------------------------------------

#define ASSERT_EQ(condition)                             \
   if(!(condition))                                      \
   {                                                     \
      printf("TEST failed!:" #condition);printf("\n\n"); \
      system("pause");                                   \
   }                                                     \
   else                                                  \
	  printf("TEST passed!\n\n")

//----------------------------------------

#include<stdlib.h>
#include<stdio.h>

//----------------------------------------
//! main
//----------------------------------------

int main()
{

   //----------------------------------------
   //! A test of push() and pop() propper work on a single element
   //----------------------------------------

   TEST(stack, PushSingleElement)
   {
      stack obj1;                     //stack::stack() for obj1
	  obj1.push(13);
	  ASSERT_EQ(obj1.pop() == 13);
	  ASSERT_EQ(obj1.get_size() == 0);
   }                                  //stack::~stack() for obj1

   //----------------------------------------
   //! A test of top limit of number elements
   //----------------------------------------

   TEST(stack, HighEdge)
   {
      stack obj2;
	  for(float j=0.0;j<obj2.get_capacity();j++)
		  obj2.push(j);
	  ASSERT_EQ(obj2.push(13) == false);
   }

   //----------------------------------------
   //! A test of bottom limit of number elements
   //----------------------------------------

   TEST(stack, LowEdge)
   {
      stack obj3;
	  ASSERT_EQ(obj3.pop() == false);
   }

   //----------------------------------------
   //! A test of empty() function
   //----------------------------------------

   TEST(stack, EmptyStack)
   {
      stack obj4;
	  ASSERT_EQ(obj4.empty() == true);
   }

   //----------------------------------------
   //! A test of get_size() function
   //----------------------------------------

   TEST(stack, CountingSize)
   {
      stack obj5;
	  for(float j=0.0;j<5;j++)
	     obj5.push(j);
	  ASSERT_EQ(obj5.get_size() == 5);
   }

   //----------------------------------------
   //! A test of top() function
   //----------------------------------------

   TEST(stack, TopAccess)
   {
      stack obj6;
	  for(float j=0.0;j<5;j++)
	  obj6.push(j);
	  ASSERT_EQ(obj6.top() == 4);
	  ASSERT_EQ(obj6.get_size() == 5);
   }

   //----------------------------------------
   //! A test of push() and pop() propper work on a half of max limit
   //----------------------------------------

   TEST(stack, Middle)
   {
      stack obj7;
	  for(float j=0.0;j<((obj7.get_capacity())/2);j++)
	  obj7.push(j);
	  ASSERT_EQ(obj7.top() == 4);
   }

   //----------------------------------------
   //! Ending
   //----------------------------------------

   printf("Seems we passed all the TEST's!!!\n");
   system("pause");
}