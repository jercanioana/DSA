//
// Created by Ioana Jercan on 2019-03-30.
//
#include "exception"
#include "Iterator.h"
#include "SortedSet.h"
SortedSetIterator::SortedSetIterator(const SortedSet& s): set(s) { // complexity Theta(1)
    //initialize current and other specific attributes
    this->current = this->set.head;
}

TElem SortedSetIterator::getCurrent() { // complexity Theta(1)
    if(this->current == NULL){
        throw std::exception();
    }
    TElem e = this->current->info;
    return e;


}

bool SortedSetIterator::valid() { // complexity Theta(1)
    if(this->current == NULL) {
        return false;
    }
    else
        return true;
}

void SortedSetIterator::next() { // complexity Theta(1)
    if(this->current == NULL){
        throw std::exception();
    }
    this->current = this->current->next;
}

void SortedSetIterator::first() { // complexity Theta(1)

}

