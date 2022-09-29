#include "jollyjumper.h"
#include <stdbool.h>
#include <malloc.h>

bool isJollyJumber(const int seq[], int size) {
/*post: answer to exercise 7.a*/
    //The difference can be found more than once
    //The difference cant be 0
    //The difference cant be larger than size

    int diffs[size-1]; //makes a array to containthe difference between seq[]'s
    
    //saves the difference between seq[i] and the next seq[i+1] 
    for(int i = 0; i < size - 1; i++){ 
        diffs[i] = seq[i] - seq[i + 1];

        //if the difference is negative, it makes it positive instead (absolute)
        if(diffs[i] < 0){
            diffs[i] = -diffs[i];
        }
    }

    bool diffs_found[size]; //makes a bool for if the different differences 1,2,3,5,..,size


    //makes them all false
    for(int i = 0; i < size; i++){
        diffs_found[i]= false;
    }

    //for each difference, if the difference is not found before it becomes true
    for(int i = 0; i < size - 1; i++){
        int diff = diffs[i];
        if(diffs_found[diff] == false && diff != 0 && diff <= size){
            diffs_found[diff] = true;
        }
        else{ // else the difference has already been found, and it is not jolly jumber, and it returns
            return false;
        }
    }   

    //all differences from 1 to size was found and it thens returns true - it is jolly jumber
    return true;
}