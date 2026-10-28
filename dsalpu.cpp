// #include <iostream>
// using namespace std;
// int main(){
//   int arr[5]={10,20,30,40,50};
//   int n = sizeof(arr)/sizeof(arr[0]);
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//   return 0;

// }
// #include <iostream>
// using namespace std;
// int main(){
//   int arr[10]={10,20,30,40};
//   int n = 4;
//   int element = 50;
//   if(n<10){
//     arr[n]=element;
//     n++;
//   }
//   else{
//     cout<<"Array is full"<<endl;
//   }
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//   int arr[10]={10,20,30,40};
//   int n = 4;
//   int element = 50;
//   if(n<10){
//     for (int i=n-1;i>=0;i--){
//       arr[i+1]=arr[i];
//     }
//     arr[0]=element;
//     n++;
//   }
//   else{
//     cout<<"Array is full"<<endl;
//   }
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//   int arr[10]={10,20,30,40};
//   int n = 4;
//   int position = 2;
//   int element = 50;
//   if(n<10 && position>=0 && position<=n){
//     for ( int i=n-1;i>=position;i--){
//       arr[i+1]=arr[i];
//     }

//     arr[position]=element;
//     n++;
//     cout<<"Element inserted at position "<<position<<endl;
//   }
//   else{
//     cout<<"invalid position or Array is full"<<endl;
//   }
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//   return 0;
// }

// delete an element from an array
// #include <iostream>
// using namespace std;
// int main(){
//   int arr[10]={10,20,30,40,50};
//   int n = 5;
//   int position = 2;
//   if(n>0 && position>=0 && position<n){
//     for ( int i=position;i<n-1;i++){
//       arr[i]=arr[i+1];
//     }
//     n--;
//     cout<<"Element deleted from position "<<position<<endl;
//   }
//   else{
//     cout<<"invalid position or Array is empty"<<endl;

//   }
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//   return 0;
// }

// // arrary deletion from the end
// #include <iostream>
// using namespace std;
// int main(){
//   int arr[10]={10,20,30,40,50};
//   int n = 5;
//   if(n>0){
//     n--;
//     cout<<"Element deleted from the end"<<endl;
//   }
//   else{
//     cout<<"Array is empty"<<endl;
//   }
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//   int arr[10]={10,20,30,40};
//   int n = 4;

//   if(n<10){

//   }
//   else{
//     cout<<"Array is full"<<endl;
//   }
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//   return 0;
// }

// // delete firts from an array
// #include <iostream>
// using namespace std;
// int main(){

//   int n ;
//   cin>>n;

//   int arr[20];
//   for(int i=0;i<n;i++){
//     cin>>arr[i];
//   }
//   for(int i=0;i<n-1;i++){
//     arr[i]=arr[i+1];
//   }
//   n--;
//   for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//   return 0;
// }

// traverse an array and print only positive numbers
// #include <iostream>
// using namespace std;
// int main(){

//   int n ;
//   cin>>n;

//   double price[20];
//   for(int i=0;i<n;i++){
//     cin>>price[i];
//   }
//   for(int i=0;i<n-1;i++){
//    if(price[i]>=0){
//     cout<<price[i]<<" ";
//    }
//   }

//   return 0;
// }

// // swap characters in a string
// #include <iostream>
// #include <string>
// using namespace std;
// int main(){
//   int n ;
//   cin>>n;
//   char arr[20];
// for (int i=0;i<n;i++){
//     cin>>arr[i];
//   }
//   char str[20];
//   for (int i=0;i<n;i++){
//     str[i]=arr[n-i-1];
//   }
// }
// int i=0;
// while(arr[i]!='\0'){
//   i++;

//   }
//   cout<<str;
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//   int n ;
//   cin>>n;
//   char arr[20];
//   for (int i=0;i<n;i++){
//     cin>>arr[i];

//   }
//   int m ;
//   cin>>m;
//   char newchar;
//   cin>>newchar;
//   for (int i=n-1;i>=m;i--){
//     arr[i+1]=arr[i];
//   }
//   arr[m]=newchar;
//   n++;
//   for (int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//   }
//   return 0;
// }

// we have to update the array the new array is the multiplication of the neighnour element

// #include <iostream>
// using namespace std;
// int main(){
//   int n ;
//   cin>>n;
//   int arr[20];
//   for (int i=0;i<n;i++){
//     cin>>arr[i];
//   }
// if(n==1){
//   cout<<arr[0];
//   return 0;

// }
// cout<<arr[0]*arr[1]<<" ";
// for (int i=1;i<n-1;i++){
//   cout<<arr[i-1]*arr[i+1]<<" ";
// }
// cout<<arr[n-2]*arr[n-1]<<" ";
// return 0;
// }

// check the frequency of an element in an array
// #include <iostream>
// using namespace std;
// int main(){
//   int n ;
//   cin>>n;
//   int array[20];
//   for (int i=0;i<n;i++){
//     cin>>array[i];

//   }
//   int frequency[51] = {0};
//   for (int i=0;i<n;i++){
//     frequency[array[i]]++; //this will increment the frequency of the element at index array[i] by 1
//   }

//   for (int i=1;i<51;i++){
//     if(frequency[i]>0){
//       cout<<i<<":"<<frequency[i]<<endl;
//     }
//   }
//   return 0;
// }

// //remove zero from the array and print the new array
// #include <iostream>
// using namespace std;
// int main(){
//   int n ;
//   cin>>n;
//   int arr[20];
//   for (int i=0;i<n;i++){
//     cin>>arr[i];
//   }
//   int newarr[20];
//   int j=0;
//   for (int i=0;i<n;i++){
//     if(arr[i]!=0){
//       newarr[j]=arr[i];
//       j++;
//     }
//   }
//   for (int i=0;i<j;i++){
//     cout<<newarr[i]<<" ";
//   }
//   return 0;
// }

// //print the common element from two arrays
// #include <iostream>
// using namespace std;
// int main(){
//   int n1,n2;

//   cin>>n1>>n2;
//   int arr1[20],arr2[20];
//   for (int i=0;i<n1;i++){
//     cin>>arr1[i];
//   }
//   for (int i=0;i<n2;i++)
//   {
//     cin>>arr2[i];
//   }
//   for (int i=0;i<n1;i++)
//   {
//     for (int j=0;j<n2;j++)
//     {
//       if(arr1[i]==arr2[j])
//       {
//         cout<<arr1[i]<<" ";
//       }

//     }
//   }
//   if(n1==0 || n2==0)
//   {
//     cout<<"No common elements";
//   }
//   return 0;
// }

// //find the smallest number in the  array and find the second smalllest numebr in the array
// #include <iostream>
// using namespace std;
// int main(){
//   int n ;
//   cin>>n;
//   int arr[20];
//   for (int i=0;i<n;i++){

//     cin>>arr[i];
//   }
//   int smallest = arr[0];
//   for (int i=1;i<n;i++){
//     if(arr[i]<smallest){

//       smallest = arr[i];
//     }
//     int secondsmallest = arr[0];
//     for (int i=1;i<n;i++){
//       if(arr[i]<secondsmallest && arr[i]!=smallest){
//         secondsmallest = arr[i];

//   }
//   cout<<smallest;
//   return 0;
// }

// //cretae a merge array from two sorted arrays

// #include <iostream>
// using namespace std;
// int main(){
//   int n1,n2;
//   cin>>n1>>n2;
//   int arr1[20],arr2[20],merged[40];
//   for (int i=0;i<n1;i++){

//     cin>>arr1[i];
//   }
//   for (int i=0;i<n2;i++){
//     cin>>arr2[i];

//   }
//   int i=0,j=0,k=0;
//   while(i<n1 && j<n2){
//     if(arr1[i]<arr2[j]){
//       merged[k]=arr1[i];
//       i++;
//     }
//     else{
//       merged[k]=arr2[j];
//       j++;
//     }

//     k++;
//   }
//   while(i<n1){
//     merged[k]=arr1[i];
//     i++;
//     k++;
//   }
//   while(j<n2){
//     merged[k]=arr2[j];
//     j++;
//     k++;
//   }

//   for (int i=0;i<k;i++){
//     cout<<merged[i]<<" ";
//   }
//   return 0;
// }

// create two array and merge them into a new array
//  #include <iostream>
//  using namespace std;
//  int main(){

//   int n1,n2;
//   cin>>n1>>n2;
//   int arr1[20],arr2[20],merged[40];
//   for (int i=0;i<n1;i++){

//     cin>>arr1[i];
//   }
//   for (int i=0;i<n2;i++){
//     cin>>arr2[i];
//   }
//   int k=0;
//   for (int i=0;i<n1;i++){
//     merged[k]=arr1[i];
//     k++;
//   }
//   for (int i=0;i<n2;i++){
//     merged[k]=arr2[i];
//     k++;

//   }
//   for (int i=0;i<k;i++){
//     cout<<merged[i]<<" ";
//   }
//   return 0;
// }

// create merged array with the two duplicate array
//  #include <iostream>
//  using namespace std;
//  int main(){
//    int n1,n2;
//    cin>>n1>>n2;
//    int arr1[20],arr2[20],merged[40];
//    for (int i=0;i<n1;i++){

//     cin>>arr1[i];
//   }
//   for (int i=0;i<n2;i++){
//     cin>>arr2[i];
//   }
//   int k=0;
//   for (int i=0;i<n1;i++){
//     merged[k]=arr1[i];
//     k++;
//   }
//   for (int i=0;i<n2;i++){
//     merged[k]=arr2[i];
//     k++;

//   }
//   for (int i=0;i<k;i++){
//     cout<<merged[i]<<" ";
//   }
//   return 0;
// }

// // merged with condition

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n1, n2;
//   cin >> n1 >> n2;
//   int arr1[20], arr2[20], merged[40];
//   for (int i = 0; i < n1; i++)
//   {

//     cin >> arr1[i];
//   }
//   for (int i = 0; i < n2; i++)
//   {
//     cin >> arr2[i];
//   }
//   int k = 0;
//   for (int i = 0; i < n1; i++)
//   {
//     merged[k] = arr1[i];
//     k++;
//   }
//   for (int i = 0; i < n2; i++)
//   {
//     merged[k] = arr2[i];
//     k++;
//   }
//   for (int i = 0; i < k; i++)
//   {
//     if (merged[i] % 2 == 0)
//     {
//       cout << merged[i] << " ";
//     }
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//   int a[] = {1, 2};
//   int b[] = {3, 4};
//   int c[] = {5, 6};
//   int ab[4];
//   int abc[6];

//   for (int i = 0; i < 2; i++)
//   {
//     ab[i] = a[i];
//   }
//   for (int i = 0; i < 2; i++)
//   {
//     ab[i + 2] = b[i];
//   }
//   for (int i = 0; i < 4; i++)
//   {
//     abc[i] = ab[i];
//   }
//   for (int i = 0; i < 2; i++)
//   {
//     abc[i + 4] = c[i];
//   }
//   for (int i = 0; i < 6; i++)
//   {
//     cout << abc[i] << " ";
//   }
//   return 0;
// }

// //linear search in an array
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin >> n;
//   int arr[20];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
//   int key;
//   cin >> key;
//   bool found = false;
//   for (int i = 0; i < n; i++)
//   {
//     if (arr[i] == key)
//     {
//       found = true;
//       cout << "Element found at index " << i << endl;
//     break;
//     }
//   }
//   if (!found)
//   {
//     cout << "Element not found" << endl;
//   }
//   return 0;
// }

// linear search in an array in class
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//    int n;
//    cout << "Enter the size of the array: ";
//    cin >> n;
//    int arr[n ];
//    for (int i = 0; i < n; i++)
//    {
//      cout << "Enter element " << i + 1 << ": ";
//      cin >> arr[i];
//    }
//    int key;
//    cout << "Enter the element to search for: ";
//    cin >> key;
//    int position = -1;
//    for (int i = 0; i < n; i++)
//    {
//      if (arr[i] == key)
//      {
//        position = i;
//        break;
//      }
//    }
//    if (position != -1)
//    {
//      cout << "Element found at index " << position << endl;
//    }
//  //   else
//  //   {
//  //     cout << "Element not found" << endl;
//  //   }
//  //   return 0;
//  // }

// //binary search in an array
// #include <iostream>
// using namespace std;
// int binarySearch(int arr[], int n, int key) {
//     int low = 0;
//     int high= n - 1;

//     while (low <= high) {
//         int mid = low + (high - low) / 2;

//         if (arr[mid] == key) {
//             return mid; // Element found
//         }
//         else if (arr[mid] < key) {
//             low = mid + 1; // Search in the right half
//         }
//         else {
//             high = mid - 1; // Search in the left half
//         }
//     }
//     return -1; // Element not found
// }
// int main()
// {
//   int n;
//   cout << "Enter the size of the array: ";
//   cin >> n;
//   int arr[n ];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
//   int key;

//   cin >> key;
//   int result=binarySearch(arr,n,key);
//   if (result != -1)
//   {
//     cout << "Element found at index " << result << endl;
//   }
//   else
//   {
//     cout << "Element not found" << endl;
//   }
//   return 0;
// };

// // bubble sort in an array
// #include <iostream>
// using namespace std;
// int main()
// {
//   int arr[] = {5, 3, 4, 8, 2};
//   int n = 5;
//   for (int i = 0; i < n - 1; i++)
//   {
//     for (int j = 0; j < n - i - 1; j++)
//     {
//       if (arr[j] > arr[j + 1])
//       {
//         int temp = arr[j];
//         arr[j] = arr[j + 1];
//         arr[j + 1] = temp;
//       }
//     }
//     cout << "sorted array is: ";
//     for (int i = 0; i < n; i++)
//     {
//       cout << arr[i] << " ";
//     }
//     return 0;
//   }
// }

// insertion sort in an array
//  #include <iostream>
//  using namespace std;
//  int main(){
//    int arr[] = {5, 3, 4, 8, 2};
//    int n = 5;
//    for (int i=1;i<n;i++){
//      int key = arr[i];
//      int j=i-1;
//      while(j>=0 && arr[j]>key){
//        arr[j+1]=arr[j];
//        j--;
//      }
//      arr[j+1]=key;
//    }
//    cout<<"sorted array is: ";
//    for (int i=0;i<n;i++){
//      cout<<arr[i]<<" ";
//  }
//  return 0;
//  }

// selection sort in an array
//  #include <iostream>
//  using namespace std;
//  int main()
//  {
//  int arr[] = {5, 3, 4, 8, 2};
//  int n = 5;
//  for (int i = 0; i < n - 1; i++)
//  {
//      int min=i;
//      for (int j =i+1; j < n; j++)
//      {
//          if (arr[j] < arr[min])
//          {
//              min = j;
//          }
//      }
//      int temp = arr[i];
//      arr[i] = arr[min];
//      arr[min] = temp;
//  }
//  cout << "sorted array is: ";
//  for (int i = 0; i < n; i++)
//  {
//      cout << arr[i] << " ";
//  }
//  return 0;
//  }

// merge two sorted arra in one sorted array

// #include <iostream>
// using namespace std;
// int main(){
//   int n,m;
//   cin>>n>>m;
//   int arr1[4],arr2[4],merged[8];
//   for (int i=0;i<n;i++){
//     cin>>arr1[i];

// }

// //linked list implementation in c++
// #include <iostream>
// using namespace std;
// struct Node {
//     int data;
//     Node* next;
// };
// int main(){

//   Node *first =new Node;
//   first->data=10;
//   first->next=NULL;

//   Node *second =new Node;
//   second->data=20;
//   second->next=NULL;

//   first->next=second;

//   Node *third =new Node;
//   third->data=30;
//   third->next=NULL;

//   second->next=third;

//   Node *fourth =new Node;
//   fourth->data=40;
//   fourth->next=NULL;

//   third->next=fourth;

//   Node *fifth =new Node;
//   fifth->data=50;
//   fifth->next=NULL;

//   fourth->next=fifth;

//   Node *temp=first;
//   while(temp!=NULL){
//     cout<<temp->data<<"->";
//     temp=temp->next;
//   }
//   cout<<"NULL"<<endl;

//   // cout<<first->data<<"->"<<first->next->data<<"->"<<first->next->next->data<<"->"<<first->next->next->next->data<<"->"<<first->next->next->next->next->data<<"->NULL"<<endl;

//   return 0;

// }

// //double linked list implementation in c++
// #include <iostream>
// using namespace std;
// struct Node {
//     int data;
//     Node* next;
//     Node* prev;
// };
// int main() {
//     Node* first = new Node;
//     first->data = 10;
//     first->prev = NULL;
//     first->next =NULL;

//     Node* second = new Node;
//     second->data = 20;
//     second->prev = first;
//     second->next = NULL;

//     first->next = second;

//     Node* third = new Node;
//     third->data = 30;
//     third->prev = second;
//     third->next = NULL;

//     second->next = third;
//     cout << "Forward Traversal: ";

//     Node *temp = first;
//     while (temp != NULL) {

//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;

//     // Backward Traversal
//     cout << "Backward Traversal: ";
//     temp = third;
//     while (temp != NULL) {
//         cout << temp->data << " ";
//         temp = temp->prev;

// }
// }

// //single linkedlists using user input

// #include <iostream>
// using namespace std;

// struct node
// {
// int data;
// node* next;
// };

// int main()
// {
//   int n;
//     cout << "Enter the number of nodes: ";
//     cin >> n;
//     node* head = NULL;
//     node* tail = NULL;

//     for (int i = 0; i < n; i++)
//     {
//         node* newNode = new node();
//         cout << "Enter data for node " << i + 1 << ": ";
//         cin >> newNode->data;
//         newNode->next = NULL;

//         if (head == NULL)
//         {
//             head = newNode;
//             tail = newNode;
//         }
//         else
//         {
//             tail->next = newNode;
//             tail = newNode;
//         }
//     }

//     cout << "Linked List: ";
//     node* temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }

// }

// //circular linked list implementation in c++
// #include <iostream>
// using namespace std;
// struct Node {
//     int data;
//     Node* next;
// };
// int main() {
//     Node* first = new Node();
//     first->data = 10;
//     Node* second = new Node();
//     second->data = 20;
//     Node* third = new Node();
//     third->data = 30;
//     first->next = second;
//     second->next = third;
//     third->next = first; // Making it circular

//     Node* temp = first;
//     do {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     } while (temp != first);
//     cout << "(back to first)" << endl;

// }

// #include <iostream>
// using namespace std;
// struct node {
//     int data;
//     node* next;
// };
// int main() {
//     node* header;
//     node*first;
//     node*second;
//     node*third;
//     header = new node();
//     header->data = 0;
//     header->next = NULL;

//     first = new node();
//     first->data = 10;
//     first->next = NULL;

//     second = new node();
//     second->data = 20;
//     second->next = NULL;

//     third = new node();
//     third->data = 30;
//     third->next = NULL;

//     header->next = first;
//     first->next = second;
//     second->next = third;

//     third->next = NULL;

//     node* temp = header->next;
//     cout << "Header Linked List: ";
//     while (temp != NULL) {
//         cout << temp->data << " -> ";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }

// // create circular doubly linked list in c++
// #include <iostream>
// using namespace std;
// struct Node
// {
//     int data;
//     Node *next;
//     Node *prev;
// };
// int main()
// {
//     Node *first = new Node();
//     first->data = 10;
//     Node *second = new Node();
//     second->data = 20;
//     Node *third = new Node();
//     third->data = 30;
//     first->next = second;
//     second->next = third;
//     third->next = first; // Making it circular
//     first->prev = third;
//     second->prev = first;
//     third->prev = second;


// // create one head pointer
// node *head = first;
// cout << "forward traversal: ";

// Node *temp = head;
// do
// {
//     cout << temp->data << " <-> ";
//     temp = temp->next;
// } while (temp != head);
// cout << "(back to first)" << endl;

// temp = third;
// cout << "backward traversal: ";
// do
// {
//     cout << temp->data << " <-> ";
//     temp = temp->prev;
// } while (temp != third);
// cout << "(back to third)" << endl;
// return 0;
// }

// //operation in linked list initial i have 10,20,30 updated is 5,10 20,30
// #include <iostream>
// using namespace std;
// struct Node
// {
    
//     int data;
//     Node *next;
    
// }


// //deletion in linked list
// #include <iostream>
// using namespace std;

// struct node{
//     int data;
//     node* next;


// };

// int main(){
//     node* head = new node;
//     node* second= new node;
//     node* third=new node;

//     head->data=10;
//     second->data=20;
//     third->data=30;
//     head->next=second;
//     second->next=third;
//     third->next=NULL;
//     cout<<"Original linked list: ";
//     node* temp=head;

//     while(temp!=head)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;

//     }
//     node* deletenode=head;
//     head=head->next;
//     delete deletenode;
//     cout <<"\nUpdtaed linked list: ";
     
//     temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;

//     }
//     return 0;
// }

// //deletion of last second element in linkedlists 

// #include <iostream>
// using namespace std;
// struct node{
//     int data ;
//     node* next;

// };
// int main(){

//     node* head = new node;
//     node* second= new node;
//     node* third=new node;
//     head->data=10;
//     second->data=20;
//     third->data=30;
//     head->next=second;
//     second->next=third;
//     third->next=NULL;
//     cout<<"Original linked list: ";
//     node* temp=head;


//     while(temp!=head)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;

//     }
//     node* deletenode=head;
//     head=head->next;
//     delete deletenode;
//     cout <<"\nUpdtaed linked list: ";
     

// }

// //stack
// #include <iostream>
// using namespace std;
// const int size = 5;
// int main(){

//     int stack[size];
//     int top=-1;
//     top++;
//     stack[top]=10;
//     top++;
//     stack[top]=20;
//     top++;
//     stack[top]=30;
//     cout<<"Stack elements are: ";
//     for(int i=top;i>=0;i--){
//         cout<<stack[i]<<" ";
// }
// int value;
// cin>>value;
// if (top==4){
    
//     cout<<"Stack is full"<<endl;
// }
// else{
//     top++;
//     stack[top]=value;
// }
// cout<<"Stack elements after pushing "<<value<<" are: ";

//     for(int i=0;i<=top;i++){
//         cout<<stack[i]<<" ";
//     }
// return 0;
// }



// #include <iostream>
// using namespace std;

// int main(){
    
//     int stack[5];
//     int top=-1;
//     push(stack,top,10);
//     push(stack,top,20);
//     push(stack,top,30);
//     display(stack,top);
//     peek(stack,top);
//     display(stack,top);
//     pop(stack,top);
//     display(stack,top);

//     if(isEmpty(top)){
//         cout<<"Stack is empty"<<endl;
//     }
//     else{
//         cout<<"Stack is not empty"<<endl;
//     }
//     if(isFull(top)){
//         cout<<"Stack is full"<<endl;
//     }
//     else{
//         cout<<"Stack is not full"<<endl;
//     }
    
//     return 0;

// }
// 

// //delete or pop top element from stack using linkedlist
// #include <iostream>
// using namespace std;
// const int size = 5;
// void pop(int stack[], int &top) {
//     if (top == -1) {
//         cout << "Stack is empty. Cannot pop." << endl;
//     } else {
//         cout << "Popped element: " << stack[top] << endl;
//         top--;
//     }
// }

// //search element using binary search all the things wiil be from user input 
// #include <iostream>
// using namespace std;
// int binarySearch(int arr[], int n, int key) {
//     int low = 0;
//     int high= n - 1;
//     while

// //one reursive call with input reduced by one 
// //two recursive call with input reduced by two

// int example(int n) {
//     if (n <= 1) {
//         return n;
//     }
//     return example(n - 1) + example(n - 2);
// }



// //pre order traversal of binary tree
// #include <iostream>
// using namespace std;
// char tree[7] = {'A', 'B', 'C', 'D', 'E', 'F', '#'};
// int n=7;
// void preOrder(int i){
//     if (i >= n || tree[i] == '#') {
//         return;
//     }
//     cout << tree[i] << " ";
//     preOrder(2 * i + 1); // Left child
//     preOrder(2 * i + 2); // Right child
// }
// int main(){
    
//     cout << "Pre-order traversal: ";
//     preOrder(0);
//     cout << endl;
//     return 0;
// }


// // // inorder traversal of binary tree
// #include <iostream> 
// using namespace std;
// char tree[7] = {'A', 'B', 'C', 'D', 'E', 'F', '#'};
// int n=7;
// void inOrder(int i){
//     if (i >= n || tree[i] == '#') {
//         return;
//     }
//     inOrder(2 * i + 1); // Left child
//     cout << tree[i] << " ";
//     inOrder(2 * i + 2); // Right child
// }
// int main(){
//     cout << "In-order traversal: ";
//     inOrder(0); 
//     return 0;
// }

// // //post order traversal of binary tree
// #include <iostream>
// using namespace std;
// char tree[7] = {'A', 'B', 'C', 'D', 'E', 'F', '#'};
// int n=7;
// void postOrder(int i){
//     if (i >= n || tree[i] == '#') {
//         return;
//     }
//     postOrder(2 * i + 1); // Left child
//     postOrder(2 * i + 2); // Right child
//     cout << tree[i] << " ";
// };
// int main(){
//     cout << "Post-order traversal: ";
//     postOrder(0);
//     return 0;
// }

//preorder traversal of binary tree using linked list
#include <iostream>
using namespace std;   

struct node {
    char data;
    node* left;
    node* right;
};
void preOrder(node* root) {
    if (root == NULL) {
        return;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int main()
{
    node* root = new node;
    root->data = 'A';
    root->left = NULL;
    root->right = NULL;

    root->left = new node;
    root->left->data = 'B';
    root->left->left = NULL;
    root->left->right = NULL;

    root->right = new node;
    root->right->data = 'C';
    root->right->left = NULL;
    root->right->right = NULL;

    root->left->left = new node;
    root->left->left->data = 'D';
    root->left->left->left = NULL;
    root->left->left->right = NULL;

    root->left->right = new node;
    root->left->right->data = 'E';
    root->left->right->left = NULL;
    root->left->right->right = NULL;

    root->right->left = new node;
    root->right->left->data = 'F';
    root->right->left->left = NULL;
    root->right->left->right = NULL;

    cout << "Pre-order traversal: ";
    preOrder(root);
    cout << endl;
    return 0;

}
