int countnodes(treenode<int>*root)
{
  int ans=1;
  for(int i=0;i<root->children.size();i++)
  {
    ans+=countnodes(root->children[i]);
  }
  return ans;
}
