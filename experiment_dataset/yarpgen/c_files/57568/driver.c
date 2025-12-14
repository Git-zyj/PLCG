#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1408738526094500089ULL;
long long int var_3 = -1492487858151839153LL;
unsigned int var_4 = 3845906092U;
signed char var_7 = (signed char)42;
signed char var_11 = (signed char)2;
int zero = 0;
signed char var_12 = (signed char)69;
unsigned long long int var_13 = 3681595273881441734ULL;
unsigned int var_14 = 2807710789U;
signed char var_15 = (signed char)-126;
unsigned int var_16 = 2116793098U;
short arr_0 [19] ;
unsigned long long int arr_1 [19] ;
int arr_3 [19] [19] [19] ;
int arr_4 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (short)4609;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 17855450414716159696ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 136764128;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -562632753;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
