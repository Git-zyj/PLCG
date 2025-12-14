#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10350773956627941217ULL;
unsigned long long int var_4 = 6295266685513542421ULL;
unsigned long long int var_5 = 7762364026901897818ULL;
int zero = 0;
unsigned long long int var_12 = 14294708657227410559ULL;
unsigned long long int var_13 = 3016211633641645545ULL;
unsigned long long int var_14 = 79238282408050239ULL;
unsigned long long int var_15 = 13908008350662109152ULL;
unsigned long long int arr_0 [23] [23] ;
unsigned long long int arr_1 [23] ;
unsigned long long int arr_2 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 5806987149619324517ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 13580577990497741178ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = 1910261311417418030ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
