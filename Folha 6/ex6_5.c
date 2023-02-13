void insert_sort_desc(int vec[], int n) {
    int i, j;
    for(i = 1; i < n; i++) {
        int x = vec[i];
        j = i-1;
        while(j>=0 && vec[j] < x) {
            vec[j+1] = vec[j];
            j--;
        }
        vec[j+1] = x;
    }
}

void sort_desc(int vec[], int n){
    insert_sort_desc(vec, n);
}
