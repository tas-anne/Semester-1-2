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
//for marking tree nodes
node* make_node(char ch,int fre,node*left,node*right)
{
    node* makenode=new node();
    makenode->cha=ch;
    makenode->frequency=fre;
    makenode->right=right;
    makenode->left=left;
    return makenode;
}
//for comparing frequency
struct compare
{
    bool operator()(node*left,node*right)
    {
        return left->frequency >right->frequency;
    }
};
void prefix_generator(node* root,  string s,  unordered_map<char, string> &huff_c)
{
    if (root == NULL)
    {
         return;
    }
    if (root->left==NULL && root->right==NULL) //leaf node found or not
    {
        huff_c[root->cha] = s;
    }
    prefix_generator(root->left,  s+"0", huff_c);//adding 0 traversing the left child
    prefix_generator(root->right, s+"1" ,huff_c);//adding 1 traversing the right child
}

void hufftree(string s)
{
    //to count the frequency of each character
    unordered_map<char,int>frequency; //to store char,frequency of each char
    for(char character: s)
    {
        frequency[character]++;//counting the frequency of each of the character of the string
    }
    //to store nodes
    priority_queue<node*, vector<node*>, compare > prio_queue;
    for (auto pair: frequency)
    {
        prio_queue.push(make_node(pair.first, pair.second, NULL, NULL));//leaf node that don't have child
    }
    while(prio_queue.size()!=1)//to reach the root from leaf
    {
        node*left=prio_queue.top();
        prio_queue.pop();//higher freq
        node*right = prio_queue.top();
        prio_queue.pop();//lower freq
        int sumation = left->frequency+ right->frequency;// leaf+leaf=internal node
        prio_queue.push(make_node('\0', sumation, left, right));//internal node creation
    }
    node* root = prio_queue.top();//Traverse the tree starting from root node
    unordered_map<char, string> huff_code;
    prefix_generator(root, " :     ", huff_code);
    cout << "Prefix codes(Generated Using huffman coding) : \n " << endl;
    for (auto pair: huff_code)
    {
        cout << " "<<pair.first << " " << pair.second << endl;//Print the  elements M : 1011
    }
}
int main()
{

    string lastfourdigit;
     cin>>lastfourdigit;
    hufftree(lastfourdigit);

}

