class Bag:

    # creates a new, empty Bag
    def __init__(self):
        self.__bag = []
        self.__frequency = []

    # Total = Theta(1)
    # adds a new element to the Bag
    def add(self, e):
        i = 0
        poz = 0
        while (i < len(self.__bag)):
            if self.__bag[i] == e:
                poz = i
                self.__frequency[poz] += 1
                i = len(self.__bag)
            else:
                i += 1

        for i in range(len(self.__bag)):
            if self.__bag[i] == e:
                self.__frequency[poz] += 1

        else:
            self.__bag.append(e)
            self.__frequency.append(1)
    # total O(n) ;n = length of the bag
    # removes one occurrence of an element from a Bag
    # returns True if an element was actually removed (the Bag contained the element e), or False if nothing was removed
    def remove(self, e):
        IsFound = 0
        for i in range(len(self.__bag)):
            if self.__bag[i] == e:
                poz = i
                IsFound = 1
                del self.__frequency[poz]
                self.__bag.remove(e)
                return True
            else:
                IsFound = 0
        if IsFound == 0:
            return False
    # Total = O(n); n = length of the bag
    # searches for an element e in the Bag
    # returns True if the Bag contains the element, False otherwise
    def search(self, e):
        return e in self.__bag

    # Total = Theta(1)
    # counts and returns the number of times the element e appears in the bag
    def nrOccurrences(self, e):
        occurances = 0
        for elem in self.__bag:
            if elem == e:
                occurances += 1
        return occurances
    # Total =  O(n) ; n = length of the bag
    # returns the size of the Bag (the number of elements)
    def size(self):
        return len(self.__bag)

    # Total =  Theta(1)
    # returns True if the Bag is empty, False otherwise
    def isEmpty(self):
        if len(self.__bag) == 0:
            return True
        return False

    # Total =  Theta(1)
    # returns a BagIterator for the Bag
    def iterator(self):
        return BagIterator(self)


class BagIterator:

    #creates an iterator for the Bag b, set to the first element of the bag, or invalid if the Bag is empty
    def __init__(self, bag):
        self.__bag = bag
        self.__current = 0

    # Total = Theta(1)
    # returns True if the iterator is valid
    def valid(self):
        return self.__current < self.__bag.size()

    # Total = Theta(1)
    # returns the current element from the iterator.
    # throws ValueError if the iterator is not valid
    def getCurrent(self):
        if self.__current == self.__bag.size():
            raise ValueError
        return self.__bag._Bag__bag[self.__current]

    # Total = Theta(1)
    # moves the iterator to the next element
    # throws ValueError if the iterator is not valid
    def next(self):
        if self.__current == self.__bag.size():
            raise ValueError
        self.__current += 1

    # Total = Theta(1)
    # sets the iterator to the first element from the Bag
    def first(self):
        self.__current = 0

    # Total = Theta(1)