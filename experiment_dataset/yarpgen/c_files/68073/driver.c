#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27128;
unsigned int var_1 = 502086739U;
long long int var_3 = 7691700906341135266LL;
unsigned long long int var_4 = 16428274810594111489ULL;
unsigned short var_5 = (unsigned short)33268;
unsigned int var_7 = 1997687888U;
int var_10 = -94985972;
int var_11 = -330272281;
long long int var_12 = -2140815214225876110LL;
int zero = 0;
unsigned short var_14 = (unsigned short)40159;
unsigned int var_15 = 479933455U;
signed char var_16 = (signed char)-44;
long long int var_17 = 5597606529050885568LL;
unsigned long long int arr_6 [24] ;
signed char arr_7 [24] ;
long long int arr_8 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 17500552766207424998ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = -8202106884282140362LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
