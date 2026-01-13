int main()
{
    int example[5];  //steak,live until the end of the scope
    for ( int i=0;i<5;i++) 
    {
        example[i] = 2; 
    }
    int* another = new int[5]; //heap,live until delete
    for ( int i=0;i<5;i++)  
    {
        another[i] = 2; 
    }
    delete[] another; //delete the memory allocated on the heap
    std::cin.get();
}