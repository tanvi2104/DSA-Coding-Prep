import java.util.LinkedList;
import java.util.Queue;

class queue
{
	private int[] arr;      // array to store queue elements
    private int front;      // front points to the front element in the queue
    private int rear;       // rear points to the last element in the queue
    private int capacity;   // maximum capacity of the queue
    private int count;      // current size of the queue
 
    // Constructor to initialize a queue
    queue(int size)
    {
        arr = new int[size];
        capacity = size;
        front = 0;
        rear = -1;
        count = 0;
    }
    
    public int dequeue()
    {
    	if(isEmpty())
    	{
    		System.out.println("Underflow");
    		System.exit(-1);
    	}
    	
    	int x = arr[front];
    	
    	System.out.println("Removing" + x);
    	front = (front+1)%capacity;
    	count--;
    	return x;
    }
    
    public void enqueue(int x)
    {
    	if(isFull())
    	{
    		System.out.println("Overflow");
    		System.exit(-1);
    	}
    	
    	System.out.println("Inserting" + x);
    	
    	rear = (rear+1)%capacity;
    	arr[rear] = x;
    	count++;
    }


//Utility function to return the front element of the queue
    public int peek()
    {
    	if (isEmpty())
    	{
    		System.out.println("Underflow\nProgram Terminated");
    		System.exit(-1);
    	}
    	return arr[front];
    }

// Utility function to return the size of the queue
    public int size() 
    {
    	return count;
    }

// Utility function to check if the queue is empty or not
    public boolean isEmpty() 
    {
    	return (size() == 0);
    }

// Utility function to check if the queue is full or not
    public boolean isFull() 
    {
    	return (size() == capacity);
    }
	
}


class Main
{
	public static void main (String[] args)
	{
		Queue<String> q = new LinkedList<String>();
		
		q.add("A");
		q.add("B");
		
		System.out.println("The front element is " + q.peek());
		
		q.remove();
		
		
		System.out.println("The queue size is " + q.size());
		
		// check if the queue is empty
        if (q.isEmpty()) 
        {
            System.out.println("The queue is empty");
        }
        else 
        {
            System.out.println("The queue is not empty");
        }
	}
}



























