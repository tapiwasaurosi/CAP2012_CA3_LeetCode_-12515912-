class MyLinkedList {
    private:
    struct crate{
        int payload;
        crate* link;
        crate (int v=0, crate *nxt=nullptr) : payload(v), link(nxt){}
    };
    crate* sentinel;
    int span;
public:
    MyLinkedList() {
            sentinel = new crate();
            span =0;
        }
    
    int get(int index) {
        if(index<0 || index >= span)return -1;
        crate* scout = sentinel-> link;
        for(int hop =0; hop< index; hop++){scout = scout->link;
        }
        return scout->payload;
    }
    
    void addAtHead(int val) {
        sentinel->link = new crate(val, sentinel->link);
        span++;
    }
    
    void addAtTail(int val) {
        crate* scout = sentinel;
        while(scout ->link != nullptr){
            scout = scout->link;
        }
        scout->link = new crate(val);
        span++;
    }
    
    void addAtIndex(int index, int val) {
        if (index < 0 || index > span) return;
        crate* scout = sentinel;
        for(int hop =0; hop < index; hop++){
            scout = scout->link;
        }
        scout->link = new crate(val, scout->link);
        span++;
    }
    
    void deleteAtIndex(int index) {
        if(index <0 || index >= span) return;
        crate* scout = sentinel;
        for(int hop = 0; hop < index; hop++){
            scout = scout->link;
        }
        crate* doomed = scout->link;
        scout->link = doomed->link;
        delete doomed;
        span--;
    }
};
