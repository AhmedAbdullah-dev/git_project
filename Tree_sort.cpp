#include<iostream>
using namespace std;

struct Node {
    int key ;
    Node *left , *right;
};

struct Node *newNode (int item){
    struct Node *temp = new Node ;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp ;
};

void storesort (Node *root , int arr[] , int &i){
    if (root != NULL){
        storesort(root->left ,arr , i );
        arr[i++] = root->key;
        storesort(root->right , arr , i);
    }
}

Node* insert(Node* node , int key){
    if (node == NULL) return newNode (key);
    if (key < node->key)
        node->left = insert(node->left , key);
    else 
      if (key > node->key)
      node->right = insert(node->right , key);
      return node;
}

void treesort(int arr[] ,int n){
    Node *root = NULL;
    root = insert(root , arr[0]);
    for (int i = 1; i < n; i++)
    {
        insert(root , arr[i]);
    }
    int i = 0;
    storesort(root , arr , i);
    
}

int main(){
    int size;
    cout << "\n Enter size : ";
    cin >> size;
    
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "\n arr[" << i << "]= ";
        cin >> arr[i];
    }

    treesort(arr , size);
    
    for (int i = 0; i < size; i++)
    {
        cout << "\n" << arr[i];
    }

    return 0;
    
    
}