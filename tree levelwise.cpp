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

void printlevelwise(treenode<int>*root)
{
  queue<treenode<int>*> pending;
  pending.push(root);
  while(pending.size()!=0)
  { 
    treenode<int>*front=pending.front();
    cout<<front->data<<":";
    pending.pop();
    for(int i=0;i<front->children.size();i++)
    { int childdata;
    cout<<front->children[i]->data<<" ,";
      pending.push(front->children[i]);
    }
    cout<<endl;
  }
}
treenode<int>* takeinputlevelwise()
{
  int rootdata;
  cout<<"Enter root data "<<endl;
  cin>>rootdata;
  queue<treenode<int>*> pending;
  treenode<int>*root=new treenode<int>(rootdata);
  pending.push(root);
  while(pending.size()!=0)
  { 
    treenode<int>*front=pending.front();
    pending.pop();
    int n;
    cout<<"enter no of children of "<<front->data;
    cin>>n;
    for(int i=0;i<n;i++)
    { int childdata;
    cout<<"enter data of "<<i<<" child of "<<root->data<<endl;
    cin>>childdata;
    treenode<int>*child=new treenode<int>(childdata);
      pending.push(child);
      front->children.push_back(child);
    }
  }
  return root;
}

int main()
{
  treenode<int>*root=takeinputlevelwise();
  printlevelwise(root);
}
