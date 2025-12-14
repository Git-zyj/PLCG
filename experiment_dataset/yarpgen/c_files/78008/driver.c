#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12757;
unsigned char var_1 = (unsigned char)179;
signed char var_4 = (signed char)24;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 13183115739389850015ULL;
signed char var_11 = (signed char)-95;
int var_12 = -793356756;
int var_13 = -2063785837;
int var_14 = 1368790483;
int arr_0 [19] [19] ;
unsigned int arr_1 [19] ;
int arr_3 [19] ;
_Bool arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 2089237445;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 795621499U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -925057986;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
