int findDuplicate(vector<int> &arr) {
  // Write your code here

  int ans=0;
  //Xor all element
  for(int i=0;i<arr.size();i++){
      ans=ans^arr[i];
  }
  // xor [1, n-1]
  for(int i=1;i<arr.size();i++){
      ans=ans^i;
  }
  return ans;
}
