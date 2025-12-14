#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 914987289;
unsigned int var_1 = 3243428582U;
int var_7 = 1573325162;
signed char var_8 = (signed char)17;
int var_10 = -1514333905;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2303729531U;
int zero = 0;
unsigned short var_14 = (unsigned short)25358;
int var_15 = 1072961720;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
unsigned short arr_1 [21] [21] ;
unsigned int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)43097 : (unsigned short)56371;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 4208032533U : 38280862U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
