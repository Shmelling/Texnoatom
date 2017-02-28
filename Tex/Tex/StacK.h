//------------------------------------------------------------------
//! @file Stack.h
//! Implements a stack class
//!
//! @author Schmelling, 2017
//-------------------------------------------------------------------

//-------------------------------------------------------------------
//! stack class
//-------------------------------------------------------------------

class stack
{
   public: 
    typedef float value_type; //!< Elements type

	stack();

	~stack();

	//---------------------------------------------------------------
	//! Pushes a value to the top of the stack
	//! @parameter value is an element to be pushed
	//! @return succes of operation
	//---------------------------------------------------------------

	bool push(value_type var);

	//---------------------------------------------------------------
	//! Returns a value from the top of the stack and then removes it
	//! @return element from the top of the stack
	//---------------------------------------------------------------
	
	value_type pop();
	
	//---------------------------------------------------------------
	//! Checks whether the stack is empty
	//! @return succes of operation
	//---------------------------------------------------------------

	bool empty();
	
	//---------------------------------------------------------------
	//! Accesses the top element of stack
	//! @return the top element of stack
	//---------------------------------------------------------------

	value_type top();

	//---------------------------------------------------------------
	//! Returns capacity of stack value
	//! @return capacity_ of the stack
	//---------------------------------------------------------------

	size_t get_capacity();

	//---------------------------------------------------------------
	//! Returns size of stack value
	//! @return size_ of the stack
	//---------------------------------------------------------------

	size_t get_size();

   private:

	//---------------------------------------------------------------
	//! Checks whether the size param smaller than capacity param
	//! @return succes of operation
	//---------------------------------------------------------------

	bool ok() const; 

	//---------------------------------------------------------------
	//! Creates a dump message on the console with parameters of the stack
	//! @return succes of operation
	//---------------------------------------------------------------

	bool dump() const;

	//---------------------------------------------------------------
	//! Static constant, maximum number of elements in the stack
	//---------------------------------------------------------------

    static const size_t capacity=10;

	//---------------------------------------------------------------
	//! Constant, poisoning number
	//---------------------------------------------------------------

	value_type POISON_INIT;

	//---------------------------------------------------------------
	//! A masssive of elements
	//! Parameter is the maximum number of elements
	//---------------------------------------------------------------

	value_type data_[capacity];

	//---------------------------------------------------------------
	//! Current number of elements in the stack
	//! Points on the top element
	//---------------------------------------------------------------

	size_t size_;
};
	