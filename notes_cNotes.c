//misc C notes

//Memory Managements notes

//Free all memory that is created in the HEAP

//Note that the pointer itself is created on the STACK
//The memory that the pointer is pointing too is created on the HEAP
//Thus it must be free'd
char *thisPointerMustBeFreed;
int *alsoNeedsFreedom = (int *)malloc( sizeof(int) );