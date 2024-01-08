#include<iostream>
#include<map>
#include<unordered_map>
#include<queue>
using namespace std;
//create nodes
struct node
{
    int frequency;
    char cha;
    node*left,*right;
};
//for making tree nodes
node* make_node(char ch,int fre,node*left,node*right)
{
    node* makenode=new node();
    makenode->cha=ch;
    makenode->frequency=fre;
    makenode->right=right;
    makenode->left=left;
    return makenode;
};
//for comparing frequency
struct compare
{  bool operator()(node*left,node*right)
    {
        return (left->frequency >right->frequency);
    }
};

void prefix_generator(string s,node* root,  unordered_map<char, string> &huff_c)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left==NULL && root->right==NULL) //leaf node found or not
    {
        char p=root->cha;
      //  cout<<p<<endl; printing leaf nodes D,N,R,Y,O,W,S,M,Z,T,E,I
        huff_c[p] = s;
    }
    prefix_generator( s+"0",root->left,  huff_c);//adding 0 traversing the left child
  //  cout<<" s= "<<s<<endl;
    prefix_generator(s+"1",root->right,huff_c); //adding 1 traversing the right child
   // cout <<"s'= "<<s<<endl;
}

int main()
{
    string  lastfourdigit;
    int stu_no;
    cout<<"Step #1.  Enter Student ID: ";
    cin>>stu_no;
    string arr[10]= {"ZERO", "ONE", "TWO", "THREE", "FOUR", "FIVE", "SIX", "SEVEN", "EIGHT", "NINE"};
    string p="MYIDIS";
       //cout<<stu_no[(id/1000)%10]<<endl;
    string q=arr[(stu_no/1000)%10];
    string r=arr[(stu_no/100)%10];
    string s=arr[(stu_no/10)%10];
    string t=arr[stu_no%10];
    string generated_string=p+q+r+s+t;
     printf("Step #2.  Generated string:  ");
     cout<<generated_string<<endl;
    lastfourdigit=generated_string;

    //Huffman tree
    unordered_map<char,int>frequency1; //to store char,frequency of each char
    for(char character: lastfourdigit)
    {
        frequency1[character]++;//counting the frequency of each of the character of the string
    }
    //to store nodes in priority queue
    priority_queue<node*, vector<node*>, compare > prio_queue;
    for (auto it: frequency1)//according to frequency
    {
        prio_queue.push(make_node(it.first, it.second, NULL, NULL));//leaf node that don't have child
    }

    //  till  more than one node in queue
    while(prio_queue.size()!=1)//to reach the root from leaf
    {
        node*left=prio_queue.top();  prio_queue.pop();//higher freq
        node*right = prio_queue.top();  prio_queue.pop();//lower freq
        int sumation = left->frequency+ right->frequency;// leaf+leaf=internal node
        prio_queue.push(make_node('\0', sumation, left, right));//internal node creation
    }
    node* root = prio_queue.top();//Traverse the tree starting from root node
    unordered_map<char, string> huff_code;
    prefix_generator( " :     ",root, huff_code);
    cout << "Step #3.  Prefix codes(Generated Using Huffman coding) :  " << endl;
    for (auto it: huff_code)
    {
        cout << "            "<<it.first << " " << it.second << endl;//Print the  elements M : 1011
    }

}

