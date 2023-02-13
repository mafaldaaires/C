void range(int vect[], unsigned size, int inicio, int incr){
    for (int i = 0; i < size; i++){
        vect[i] = inicio + i*incr;
    }
}