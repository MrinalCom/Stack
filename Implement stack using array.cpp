void MyStack :: push(int x)
{
    // Your Code
    if(1000-top>1){
        top=top+1;
        arr[top]=x;
    }
    else{
    
        return ;
    }
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    // Your Code  
    if(top==-1){
        return -1;
    }
    else{
        int result=arr[top];
         top--;
        return result;
    }
}
