#include <queue>
template<typename Key, typename Value>
class BST{
private:
	struct Node{
		Key key;
		Value value;
		Node *left;
		Node *right;
		
		Node(Key key, Value value){
			this->key = key;
			this->value = value;
			this->left = this->right = NULL;
		}
	};
	Node *root;
	int count;
	
	Node* insert(Node *node, Key key, Value value){
		if(node == NULL){
			count ++;
			return new Node(key, value);
		}
		if(key == node->key){
			node->value = value;
		}
		else if(key < node->key){
			node->left = insert(node->left, key, value);
		}
		else{
			node->right = insert(node->right, key, value);
		}
		return node;
	}
	bool contain(Node *node, Key key){
		if(node == NULL)
			return false;
		if(node->key == key)
			return true;
			
		else if(node->key > key)
			return contain(node->left, key);
		else
			return contain(node->right, key);
	}
	Value* search(Node* node, Key key){
		if(node == NULL)
			return NULL;
		if(node->key == key)
			return &(node->value);
		else if(node->key > key)
		    return search(node->left, key);
		else
			return search(node->right, key);
	}
	void preOrder(Node* node){
		if(node != NULL){
			cout<<node->key<<endl;
			preOrder(node->left);
			preOrder(node->right);
		}
	}
	void inOrder(Node* node){
		if(node != NULL){			
			inOrder(node->left);
			cout<<node->key<<endl;
			inOrder(node->right);
		}
	}
	void postOrder(Node* node){
		if(node != NULL){			
			postOrder(node->left);
			postOrder(node->right);
			cout<<node->key<<endl;
		}
	}
	void destroy(Node *node){
		if(node != NULL){
			destroy(node->left);
			destroy(node->right);
			
			delete node;
			count --;
		}
	}
public:
	BST(){
		root = NULL;
		count = 0;
	}
	~BST(){
		destroy(root);
	}
	int size(){
		return count;
	}
	bool isEmpty(){
		return count == 0;
	}
	void insert(Key key, Value value){
		root = insert(root, key, value);
	}
	bool contain(Key key){
		return contain(root, key);
	}
	Value* search(Key key){
		return search(root, key);
	}
	void preOrder(){
		preOrder(root);
	}
	void inOrder(){
		inOrder(root);
	}
	void postOrder(){
		postOrder(root);
	}
	void levelOrder(){
		queue<Node*> q;
		q.push(root);
		while( !q.empty() ){
			Node *node = q.front();
			q.pop;
			cout<<node->key<<endl;
			if( node->left ){
				q.push(node->left);
			}
			if( node->right ){
				q.push(node->right);
			}
		}
	}
};
