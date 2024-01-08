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
//struct compare
//{
//    bool operator()(node*left,node*right)
//    {
//        return left->frequency >right->frequency;
//    }
//};
bool comp(node* left, node* right)
{
    return left->frequency > right->frequency;   //ascending
}
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
void ques1(string s)
{
    for(int i=5; i<=8; i++)
    {
        if(s[i]=='0')
            cout<<"ZERO";
        if(s[i]=='1')
            cout<<"ONE";
        if(s[i]=='2')
            cout<<"TWO";
        if(s[i]=='3')
            cout<<"THREE";
        if(s[i]=='4')
            cout<<"FOUR";
        if(s[i]=='5')
            cout<<"FIVE";
        if(s[i]=='6')
            cout<<"SIX";
        if(s[i]=='7')
            cout<<"SEVEN";
        if(s[i]=='8')
            cout<<"EIGHT";
        if(s[i]=='9')
            cout<<"NINE";
    }
}
int main()
{
    string s, lastfourdigit;
    cout<<"Step #1.  Enter Student ID: ";
    cin>>s;
     printf("Step #2.  Generated string: MYIDIS");
     ques1(s);
     cout<<endl;
     lastfourdigit="MYIDISONETWOTWOZERO";
    unordered_map<char,int>frequency; //to store char,frequency of each char
    for(char character: lastfourdigit)
    {
        frequency[character]++;//counting the frequency of each of the character of the string
    }
    //to store nodes
    priority_queue<node*, vector<node*>, comp > prio_queue;
    for (auto pair: frequency)
    {
        prio_queue.push(make_node(pair.first, pair.second, NULL, NULL));//leaf node that don't have child
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
    for (auto pair: huff_code)
    {
        cout << "            "<<pair.first << " " << pair.second << endl;//Print the  elements M : 1011
    }

}


