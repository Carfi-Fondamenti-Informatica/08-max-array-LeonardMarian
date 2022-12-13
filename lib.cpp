#include "lib.h"
float numeromaggiore( float numeri[], int a){
    for (int i=0; i < a; i++){
        if( numeri[0] > numeri[i]){

        }else {
            numeri[0]= numeri [i];
        }
    }
    return numeri[0];
}
