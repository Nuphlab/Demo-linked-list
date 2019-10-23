#include "PlaylistNode.h"
#include <iostream>
#include <string>

using namespace std;

struct node {
   int number;
   string artist;
   string song;
   node* nodePtr;
};



int main() {
   node* head = nullptr;
   node* tail = nullptr;
   node* temp = nullptr;

   head = new node;
   tail = new node;
   temp = new node;

   head->number = 1;
   head->artist = "John Mayer";
   head->song = "Clarity";
   head->nodePtr = tail;
   temp = head;

   tail->number = 2;
   tail->artist = "Dave Matthews";
   tail->song = "Stay or leave";
   tail->nodePtr = nullptr;
   
   


   while (temp != nullptr) {
      cout << temp->number << endl;
      cout << temp->artist << endl;
      cout << temp->song << endl;
      temp = temp->nodePtr;
   }
   


   return 0;
}