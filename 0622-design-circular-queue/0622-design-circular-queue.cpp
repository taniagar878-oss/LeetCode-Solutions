class MyCircularQueue {
public:
    int front,rear,size;
    vector<int>cq;
    MyCircularQueue(int k) 
    {
        front=-1;
        rear=-1;
        size=k;
        cq.resize(k);
    }
    bool enQueue(int value) 
    {
        if(isFull()) return false;
        rear=(rear+1)%size;
        if(front==-1) front=0;
        cq[rear]=value;
        return true;
    }
    
    bool deQueue() 
    {
        if(isEmpty()) return false;
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else front=(front+1)%size;
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        int value=cq[front];
        return value;
    }
    
    int Rear() 
    {
        if(isEmpty()) return -1;
        int value=cq[rear];
        return value;
    }
    
    bool isEmpty() 
    {
        if(front==-1) return true;
        return false;
    }
    
    bool isFull()
    {
        if(front==(rear+1)%size) return true;
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */