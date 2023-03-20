//Felipe dos Santos

#include <stdio.h>

int stack[size];
top = -1;


bool isEmpty()
{
    if (top != -1)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool isFull()
{
    if (top == size-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void push(int data)
{
    if (!isFull())
    {
        top += top;
        stack[top] = data;
    }
    else
    {
        printf("stack is full\n");
    }
    
}

int pop()
{
    int data;
    if (isEmpty())
    {
        printf("stack is empty\n");
        return -1;
    }
    else
    {
        data = stack[top];
        top -= top;
        return data;
    }

    
}

int peek()
{
    return stack[top];
}



int main()
{   
    //determine size
    size = 6; 
    //insert data till capacity runs out
    push(1);
    push(4);
    push(2);
    push(5);
    push(10);
    push(20);

    //check if stack is full
    printf("Stack full: %s\n" , isfull()?"true":"false");
    
    //check top element
    printf("Element at top of the stack: %d\n" ,peek());
    printf("Elements: \n");

    // pop and print stack data (LIFO)
    while(!isempty()) 
    {
        int data = pop();
        printf("%d\n",data);
    }

    //check if stack is full
    printf("Stack full: %s\n" , isfull()?"true":"false");
    //check if stack is empty
    printf("Stack empty: %s\n" , isempty()?"true":"false");
   
    return 0;
}