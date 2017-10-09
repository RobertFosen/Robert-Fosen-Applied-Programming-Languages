#include <iostream>
 
using namespace std;
 
class HeadNode {
    public:
    	HeadNode() { 
    		headPtr = 0; 
    		tailPtr = 0; 
    	};
 
    class Node {
        public:
        	Node(int val) { 
        		element = val; 
        		next = 0; 
        	};
        	Node *next;
        	int element;
    };
 
    void deleteNode(int deleteItem);
    void insertNode(int val);
    void traverseNode();
    Node *headPtr;
    Node *tailPtr;
 
};
 
void HeadNode::traverseNode() {

	Node *currPtr = headPtr;
 
	for(currPtr = headPtr; currPtr !=0; currPtr = currPtr->next) {
		cout << currPtr->element << endl;
	}
};
 
void HeadNode::deleteNode(int deleteItem) {
 
    // Delete element if front node, middle node and/or last node
     
    Node *currPtr = headPtr;
    Node *prevPtr = headPtr;
    for ( currPtr = headPtr;  currPtr != NULL; currPtr = currPtr->next) {
        if ( currPtr->element == deleteItem ) {
        	// Item at the top
            if ( currPtr == headPtr) {
                headPtr = headPtr->next;
                delete currPtr;
                cout << " Deleted the head element " << deleteItem << endl;
            // Delete item at the end
            } else if ( currPtr->next == NULL) {
            	tailPtr = prevPtr;
            	prevPtr->next = NULL;
            	delete currPtr;
            	cout << " Deleted the end element " << deleteItem << endl;
            // Item in the middle
            } else {
            	prevPtr->next = currPtr->next;
            	delete currPtr; 
            	cout << " Deleted the element " << deleteItem << endl;
            }
        } else {
        	prevPtr = currPtr;
        }
    } 
 
};
 
void HeadNode::insertNode(int val) {
	// Insert if it is the first node
    if ( headPtr == 0 ) {
        headPtr = new Node(val);
        tailPtr = headPtr;
    // Insert if it is not the first node
    } else {
    	tailPtr->next = new Node(val);
    	tailPtr = tailPtr->next;
    }
 
}
 
int main() {
     
    HeadNode *headNode = new HeadNode();
    for ( int i = 0; i < 10; i++ ) {
        headNode->insertNode(i);
    }
    
    headNode->traverseNode();
 
    // delete the front node 
    headNode->deleteNode(0);
    
    headNode->traverseNode();
 
    // delete the last element in the node 
    headNode->deleteNode(9);
    
    headNode->traverseNode();
 
    // delete the middle element in the node
    headNode->deleteNode(3);
    
    headNode->traverseNode();

     
 
};