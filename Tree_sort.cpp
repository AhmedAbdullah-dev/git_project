#include<iostream>
using namespace std;

struct Node {
    int value;
    Node *left , *right;
};

Node *newNode(int item){
    Node *temp = new Node ;
    temp->value = item ;
    temp->left = temp->right = NULL ;
    return temp ;
}

Node* insert(Node* node, int key) {
    if (node == NULL) {
        return newNode(key);
    }

    if (key < node->value) {
        node->left = insert(node->left, key);
    } 
    else {
        node->right = insert(node->right, key);
    }

    return node;
}

void storesort(Node *root , int arr[] , int &i){
    if (root != NULL){
    storesort(root->left , arr , i);

    arr[i] = root->value;
    i++;

    storesort(root->right , arr , i);
    }
}

void treesort(int arr[] , int n){
    Node *root = NULL;
    root = insert(root , arr[0]);

    for (int i = 0; i < n; i++)
    {
        insert(root , arr[i]);
    }

    int i = 0;
    storesort(root , arr , i);
    
}

int main (){
  int size;
  cout << "Enter Size of Array : ";
  cin >> size;

  int array[size];
   for (int i = 0; i < size; i++)
   {
    cout << "Array [" << i << "]= ";
    cin >> array[i];
   }

   treesort(array , size);

   cout << "Sortet Tree :";
   for (int i = 0; i < size; i++)
   {
    cout << array[i] << " ";
   }
   
}


