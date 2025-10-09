
class StackNode:

    # # Constructor to initialize a node
     def __init__(self, data):
         self.data = data
         self.next = None


class MyStack:


 
        
    #Function to push an integer into the stack.
    
    
    def __init__(self):
        self.head = None
        self.track =self.head 
        
        
        
        
    def push(self, data):
        
        newNode = StackNode(data)
        if self.head is None :
            self.head  = newNode
            self.track = self.head
            return 
        self.track.next = newNode
        
            
            
            
        
        
        

        # Add code here


    #Function to remove an item from top of the stack.
    def pop(self):
        if self.track :
            return -1
        return self.track.data
    
    
a = MyStack()
a.push(1)
a.push(2)