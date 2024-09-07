template<typename T>
class Linked_list{
private:
	struct Node {
		T val;
		Node *next,*prev;
		Node(T val,Node *next,Node *prev): val(val),next(next),prev(prev) {}
		Node(T val,Node *next): val(val),next(next),prev(NULL) {}
		Node(T val): val(val),next(NULL),prev(NULL) {}
	}; 
	Node *head,*tail,*newNode,*del,*cur,*bef,*after;
	// length linked list 
	size_t length;
public:
	Linked_list(T val): 
		head(new Node(val)),
		tail(head),
		length(1)
	{}

	template<typename Iterator>
	Linked_list(const Iterator begin,const Iterator end,bool front = false): 
		head(new Node(*begin)),
		tail(head),
		length(1)
	{
		Iterator cur = begin + 1;		
		for(;cur != end;++cur,++length){
			if(front)
				push_front(*cur);	
			else
				push_back(*cur);
		}
	}

	~Linked_list(){ // remove all  

		// ada bug tapi ntah lah bisa sendiri 	
		bool stop = false;	
		while(1){
			if(cur == tail) stop = true;
			del = cur;
			delete del;
			if(stop) break;	
			cur = cur->next;
		}
	}

	void push_front(const T val){
		newNode = new Node(val);	
		newNode->next = head;	
		head->prev = newNode;
		head = newNode;	
		++length;
	}

	void push_back(const T val){
		newNode = new Node(val);		
		tail->next = newNode;	
		newNode->prev = tail;	
		tail = newNode;	
		++length;
	}

	void remove_at(const int index){
		assert(index > 1 && index <= length);
		cur = head;
		for(int i = 1;i <= index;++i){
			if(i == index - 1) bef = cur; // element before index
			else if(i == index) del = cur; // element at index that need to remove
			cur = cur->next;
		}
		// cur is element after element at index	
		bef->next = cur;
		cur->prev = bef;	
		delete del;	
		--length;
	}

	void insert_at(const T val,const int index){
		assert(index > 1 && index <= length);
		cur = head;
		for(int i = 1;i < index - 1;++i){
			cur = cur->next;
		}
		newNode = new Node(val,cur->next,cur);
		cur->next->prev = newNode;	
		cur->next = newNode;
		++length;	
	}

	void print_all(bool rev = false){
		cur = rev ? tail : head;
		bool stop = false;
		while(1){
			if(cur->next == NULL && !rev) stop = true;
			if(cur->prev == NULL && rev) stop = true;
			cout << cur->val << (stop ? '\n' : ' ');
			if(stop) break;
			if(rev) cur = cur->prev;
			else cur = cur->next;
		}
	}
	
	// return the length of node
	size_t size() const {
		return length;		
	}

	T at(const int index) {
		cur = head;
		for(int i = 1;i < index;++i) cur = cur->next;
		return cur->val;
	}	
	
	Node* get_head() const {
		return head;
	}

	Node* get_tail() const {
		return tail;
	}

	// algo to remove duplicate in sorted order
    void remove_duplicates() {
		// TODO: semua element harus diurutkan dulu 
		if(head == NULL)return;
		cur = head;
		while(1){
			if(cur == tail) break;
			if(cur->val == cur->next->val){
				if(cur->next == tail){
					del = tail;
					cur->next = NULL;
					tail = cur;
					delete del;
					break;
				} else {
					after = cur->next->next;
					del = cur->next;
					delete del;
					cur->next = after;
				}
				continue;	
			} 
			cur = cur->next;	
		}
	}
};





