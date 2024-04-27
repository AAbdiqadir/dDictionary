#include "dictionary.h"

treeNode::treeNode(int k, std::string i, treeNode* left, treeNode * right){
    key = k;
    item = i;


}
Dictionary::Dictionary() {
   root = nullptr;
}
void Dictionary::insert(int k, std::string i)
{
   if (root == nullptr) {
       root = new treeNode(k, i, nullptr,nullptr);
   }
   else {
       treeNode *ptr = root;
       bool inserted = false;
       while (ptr != nullptr && !inserted) {
           if (k == ptr->key) {
                ptr->item = i;
                inserted = true;
           }
           else if(k <ptr->key){
                if (ptr->left == nullptr) {
                    ptr->left = new treeNode(k, i, nullptr,nullptr);
                }
                else {
                    ptr = ptr->left;
                }
            }
            else {
               if (ptr->right == nullptr) {
                   ptr->right = new treeNode(k, i, nullptr,nullptr);
               }
               else {
                   ptr = ptr->right;
               }
           }







       }
   }
}

std::string* Dictionary::lookup(int k) {
   std::string* r = nullptr;
   treeNode *nptr = this->root;
   while (nptr != nullptr && r == nullptr) {
      if (nptr->key == k) {
          r = &(nptr->item);
      }
      else if(k < nptr->key){
         nptr = nptr->left;
      }
      else{
          nptr = nptr->right;
      }
   }
   return r;
}
