//
// Created by Ioana Jercan on 2019-04-25.
//

#ifndef DSALAB6_MATRIX_H
#define DSALAB6_MATRIX_H



typedef int TElem;
class Element{
public:
    int line;
    int column;
    TElem value;
};

typedef Element TKey;


#define NULL_TELEM 0



class Matrix {
private:
    TKey* T;
    int lines;
    int columns;
    int m;
    int* next;
    int FirstElement;
    int FirstFree;
    int h(TElem k){
        return k%m;
    }
    float alpha = 0.89;
    int size = 0;

    void changeFirstFree();
    void rehash();
    int change(int a);


public:

    //constructor

    //throws exception if nrLines or nrCols is negative or zero

    Matrix(int nrLines, int nrCols);



    //returns the number of lines

    int nrLines() const;



    //returns the number of columns

    int nrColumns() const;



    //returns the element from line i and column j (indexing starts from 0)

    //throws exception if (i,j) is not a valid position in the Matrix

    TElem element(int i, int j) const;


    //modifies the value from line i and column j

    //returns the previous value from the position

    //throws exception if (i,j) is not a valid position in the Matrix

    TElem modify(int i, int j, TElem e);



};



#endif //DSALAB6_MATRIX_H
