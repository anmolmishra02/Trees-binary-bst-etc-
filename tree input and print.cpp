#include<bits/stdc++.h>
using namespace std;

template<typename T>
class treenode
{
  public:
  T data;
  std::vector<treenode<T>*> children ;
  
  treenode(T data)
  {
    this->data=data;
  }
};
void printtree(treenode<int>*root)
{
  if(root==NULL) return;
  cout<<root->data<<" :";
  for(int i=0;i<root->children.size();i++)
  {
    cout<<root->children[i]->data<<",";
  }
  cout<<endl;
  for(int i=0;i<root->children.size();i++)
  {
    printtree(root->children[i]);
  }
}

treenode<int>*takeinput()
{
  int rootdata;
  cout<<"Enter  data"<<endl;
  cin>>rootdata;
  treenode<int>*root=new treenode<int>(rootdata);
  int n;
  cout<<"Enter no of children of "<<rootdata<<endl;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    treenode<int>*child=takeinput();
    root->children.push_back(child);
  }
  return root;
}

int main()
{
  treenode<int>*root=takeinput();
  printtree(root);
}
