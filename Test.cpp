#pragma once

#include<iostream>
#include"Tree.hpp"
#include"Tree.cpp"


using namespace ariel;
using namespace std;

std::vector<Tree> New_Trees(int num){
  vector<Tree> ans = new vector<Tree>();
  for(int x : num)
  ans.insert(Tree());
  return ans;
}


int main(){
  Tree t1;
  Tree t2;
  t1.insert(5).insert(6).insert(4).insert(1).insert(7);
  t2.insert(8).insert(10).insert(3).insert(2).insert(9);
  // cout<<"the first tree - size : "<<t1.size()<<",root: "<<t1.root()<<",right: "<<t1.right(5)<<",left: "<<t1.left(5)<<"\n";
  // cout<<"the second tree - size : "<<t2.size()<<",root: "<<t2.root()<<",right: "<<t2.right(8)<<",left: "<<t2.left(8)<<"\n";
  // cout << "the first tree conatins 6 ? "<<t1.contains(6)<<"\n";
  // cout << "the second tree conatins 20 ? "<<t2.contains(20)<<"\n";
  // t1.remove(6);
  // t2.insert(20);
  // cout << "the first tree conatins 6 ? "<<t1.contains(6)<<"\n";
  // cout << "the second tree conatins 20 ? "<<t2.contains(20)<<"\n";
  // cout << "this should be 5 (4 parent) -> "<<t1.parent(4)<<"\n";
  //
  // cout<<"\n\n";
  // cout<<"the first tree - size : "<<t1.size()<<",root: "<<t1.root()<<",right: "<<t1.right(5)<<",left: "<<t1.left(5)<<"\n";
  int x = t1.left(5);
  int y = t1.right(5);
  cout<<" ans : x- "<<x<<" y- "<<y<<endl;

  vector<Tree> v = New_Trees(10);
  return 0;
}
