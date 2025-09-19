#include <iostream>
#include "board.h"
#define SIZE 5
using namespace std;

class BoardArray : public Board {
    Entry* array;
    int index;

    public:
        BoardArray() {
            array = new Entry[SIZE];
            index = 0;
        }

        void add(Entry* entry) {
            // TODO: IMPLEMENT THIS FUNCTION
            // ALGORITHM IS PROVIDED IN INSTRUCTIONS.TXT
            int insertAtPos = index;
            for(int i = 0; i < index; i++){
                if(entry -> compare(array[i])){
                    insertAtPos = i;
                    break;
                }

            }

            if(insertAtPos == index && index == SIZE){
                std:: cout << entry -> name << "'s score is too low to be added" << std:: endl;
                return;
            }
            
            if(index < SIZE){
                index++;
            }
        }

        void print() {
            for (int i = 0; i < index; i++) {
                cout << i + 1 << ". ";
                array[i].print();
            }
        }
};