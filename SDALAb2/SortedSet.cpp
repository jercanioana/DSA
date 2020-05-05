//
// Created by Ioana Jercan on 2019-03-23.
//
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "SortedSet.h"
#include "Iterator.h"

SortedSet::SortedSet(Relation r) {
    this->head = new SLLNode;
    this->relation = r;
    this->head->next = NULL;
}
bool SortedSet::add(TComp e) {
    SLLNode* newNode = this->head;
    newNode->info = e;
    newNode->next = this->head;
    this->head = newNode;
    if(newNode == NULL)
        return false;
    else
        return true;

}
bool SortedSet::remove(TComp e) { // complexity O(n)
    SLLNode* currentNode = this->head;
    SLLNode* prevNode = NULL;
    while(currentNode != NULL && currentNode->info != e){
        prevNode = currentNode;
        currentNode = currentNode->next;
    }
    if(currentNode != NULL && prevNode == NULL)
        this->head = this->head->next;
    else if (currentNode != NULL) {
        prevNode = currentNode;
        currentNode = NULL;
    }
    if(currentNode == NULL)
        return true;
    else
        return false;
}
bool SortedSet::search(TElem elem) const { // complexity O(n)
    SLLNode* current = this->head;
    while (current != NULL && current->info != elem){
        current = current->next;
    }
    if(current == NULL)
        return false;
    else
        return true;
}
int SortedSet::size() const {
    if (this->isEmpty())
        return 0;
    return this->size();
}
SortedSetIterator SortedSet::iterator() const {
    SortedSetIterator iteratorContainer(*this);
    return iteratorContainer;
}
bool SortedSet::isEmpty() const {
    if(this->size() == 0)
        return true;
    return false;
}

SortedSet::~SortedSet() {

}
