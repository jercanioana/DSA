//
// Created by Ioana Jercan on 2019-04-25.
//

#include "Matrix.h"
#include <iostream>
#include <exception>
bool IsPrime(int number)
{

    if (number == 2 || number == 3)
        return true;
    if (number % 2 == 0 || number % 3 == 0)
        return false;
    int divisor = 6;
    while (divisor * divisor - 2 * divisor + 1 <= number)
    {
        if (number % (divisor - 1) == 0)
            return false;
        if (number % (divisor + 1) == 0)
            return false;
        divisor += 6;
    }

    return true;

}

int NextPrime(int a)
{

    while (!IsPrime(a))
    {
        a++;
    }
    return a;

}

int Matrix::change(int a){
   a += 1;
    while (a < this->m and this->T[a].value != -1){
//        std::cout<<T[this->FirstFree].value;
        a += 1;
    }
    return a;
}

Matrix::Matrix(int nrLines, int nrCols) { // complexity O(m)
    if(nrLines <= 0 or nrCols <= 0)
        throw std::exception();
    this->lines = nrLines;
    this->columns = nrCols;
    this->m = 19;
    this->FirstFree = -1;
    this->FirstElement = -1;
    this->T = new TKey[this->m];
    for(int i=0; i<m; ++i){
        this->T[i].value = -1;
    }
    this->next = new int[this->m];
    for(int i=0; i<m; ++i){
        this->next[i] = -1;
    }
}


int Matrix::nrColumns() const { // complexity theta(1)
    return this->columns;
}

int Matrix::nrLines() const { // complexity theta(1)
    return this->lines;
}

TElem Matrix::element(int i, int j) const { // complexity O(m)

    if( i<0 || j<0 || this->nrLines() < i || this->nrColumns() < j)
        throw std::exception();
    int index = 0;
    while (index != m)
    {
        if (this->T[index].line > i)
            break;
        if (this->T[index].line == i and this->T[index].column == j)
            return this->T[index].value;
        index++;

    }

    return 0;

}

void Matrix::changeFirstFree() { // complexity O(m)
    this->FirstFree += 1;
    while (this->FirstFree < this->m and T[this->FirstFree].value != -1){
        this->FirstFree += 1;
    }
}


void Matrix::rehash() { // complexity O(m)

    int double1;
    double1 = 2*m;
    int oldM;
    oldM = m;
    m = NextPrime(double1);
    int current = 0;
    TKey* newT = new TKey[this->m];
    int* newNext = new int[this->m];
    int pos;
    for(int i = 0; i< oldM; i++){
        newT[i].value = -1;
    }
    for(int i = 0; i< oldM; ++i)
        newNext[i] = this->next[i];
    for(int i = oldM; i < this->m; ++i)
        newNext[i] = -1;
    delete[] this->next;
    this->next = newNext;
    this->FirstFree = -1;

    for(int i = 0; i < oldM; i++){
        pos = h(this->T[i].value);
        if(newT[pos].value == -1) {
            newT[pos] = this->T[i];
            newNext[pos] = -1;
            changeFirstFree();

        }
        else{
            current = pos;
            while (newNext[current] != -1) {
                current = newNext[current];
            }
            newT[this->FirstFree] = this->T[i];
            newNext[this->FirstFree] = -1;
            newNext[current] = this->FirstFree;
            changeFirstFree();

        }


    }
    delete[] this->T;
    this->T = newT;



}


TElem Matrix::modify(int i, int j, TElem e) { // complexity theta(1)
    if (i < 0 || j < 0 || this->nrLines() < i || this->nrColumns() < j)
        throw std::exception();
    int pos;
    pos = h(e);

    int index = this->FirstElement;
    TKey new_element;
    int current;

    new_element.column = j;
    new_element.value = e;
    new_element.line = i;
    if (index == -1) {
        this->T[pos] = new_element;
        this->next[pos] = -1;
        changeFirstFree();
        size++;
    }
    while (index != -1) {

        if (index != pos or this->T[index].value == -1) {
            if (this->T[pos].value == -1) {
                this->T[pos] = new_element;
                this->next[pos] = -1;
                size++;
                changeFirstFree();
                return 0;
            }
        }

            if ((this->FirstFree / this->m) > this->alpha) {
                rehash();

            }
            else {
                current = pos;
                while (this->next[current] != -1) {
                    current = this->next[current];
                }
                this->T[FirstFree] = new_element;
                this->next[FirstFree] = -1;
                this->next[current] = this->FirstFree;
                changeFirstFree();
                size++;
                return 0;
            }





    if (this->T[index].line == i and this->T[index].column == j) { //just modify
        int old_value = this->T[index].value;
        this->T[index] = new_element;
        return old_value;
    }

        index = this->next[index];
    }


    //std::cout<<this->next[FirstElement];

    if (this->FirstElement == -1)
        this->FirstElement = pos;


    return 0;
}


