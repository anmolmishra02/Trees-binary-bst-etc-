#include<bits/stdc++.h>
using namespace std;
template <typename T>
class treenode
{
  public:
  T data;
  vector<treenode<T>*> child;
  
  treenode(T data)
  {
    this->data=data;
  }
};

void printnode(treenode<int>*root)
{
  if(root==NULL)
  {
    return;
  }
  cout<<root->data<<endl;
  for(int i=0;i<root->child.size();i++)
  {
    printnode(root->child[i]);
  }
}

int main()
{
  treenode<int>*root=new treenode<int>(1);
  treenode<int>*first=new treenode<int>(2);
  treenode<int>*second=new treenode<int>(4);
  treenode<int>*five=new treenode<int>(7);
  root->child.push_back(first);
  root->child.push_back(second);
  first->child.push_back(five);
  printnode(root);
}
