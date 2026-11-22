class MyCircularDeque {
    private:
    vector<int> ring;
    int anchor;
    int span;
    int cap;
public:
    MyCircularDeque(int k) {
        ring.assign(k, 0);
        anchor = 0;
        span = 0;
        cap = k;
    }
    
    bool insertFront(int value) {
        if (isFull()) return false;
        anchor = (anchor -1 + cap) % cap;
        ring[anchor] = value;
        span++;
        return true;
    }
    
    bool insertLast(int value) {
        if (isFull()) return false;
        int slot = (anchor + span) % cap;
        ring[slot] = value;
        span++;
        return true;
    }
    
    bool deleteFront() {
        if (isEmpty()) return false;
        anchor = (anchor + 1) % cap;
        span--;
        return true;
    }
    
    bool deleteLast() {
       if (isEmpty()) return false;
        span--;
        return true;
    }
    
    int getFront() {
        if (isEmpty()) return -1;
        return ring[anchor];
    }
    
    int getRear() {
        if (isEmpty()) return -1;
        int tail = (anchor + span -1) % cap;
        return ring[tail];
    }
    
    bool isEmpty() {
        return span == 0;
    }
    
    bool isFull() {
        return span == cap;
    }
};
