//misc C notes

// STACK
// 	* LIFO (last in first out)
// 	* Does not need memory management 
// 	* When function returns, all local variables are popped off
// 	* Stores temporary variables created by each function (local scope), only while the function is called

// HEAP
// 	* Un-managed memory (must be done manually)
// 	* Memory is allocated in the HEAP with malloc() and calloc() calls
// 	* All memory created in the HEAP must be free'd with free(), if not then we have memory leaks!
// 	* HEAP is slower to use than STACK because of the need to interface with pointers

/* ----------------------------------------------------------------------------
 * memory management notes
 * ----------------------------------------------------------------------------*/

//Note that the pointer itself is created on the STACK
//The memory that the pointer is pointing too is created on the HEAP
//Thus it must be free'd
int *needsFreedom = (int *)malloc( sizeof(int) );
free(needsFreedom)

//This pointer is uninitialized, these pointers when free'd will give
//undefined behavior!
char *thisPointerShouldNotBeFreed;

//In comparison, pointers that are NULL (global and static) pointers
//Will do nothing when free'd
static char* freeThisPointerIfYouWant;
free(freeThisPointerIfYouWant)