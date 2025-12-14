#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20830;
short var_5 = (short)23768;
short var_7 = (short)-8188;
short var_8 = (short)-5392;
unsigned char var_10 = (unsigned char)178;
int zero = 0;
unsigned int var_11 = 1667074902U;
long long int var_12 = -3740322551066380840LL;
long long int var_13 = -6151438210780383609LL;
long long int var_14 = -1531135920388607484LL;
short var_15 = (short)-6283;
unsigned char var_16 = (unsigned char)234;
int var_17 = -307356118;
unsigned int var_18 = 3093659847U;
long long int var_19 = -605019348640794626LL;
signed char var_20 = (signed char)-87;
unsigned int var_21 = 2804447004U;
short arr_0 [25] ;
unsigned long long int arr_1 [25] ;
long long int arr_2 [25] [25] [25] ;
long long int arr_3 [25] ;
int arr_4 [25] ;
signed char arr_7 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)23123;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 14784403909019764932ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -6068189036533972023LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -959268965104287358LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = -439003997;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)40;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
