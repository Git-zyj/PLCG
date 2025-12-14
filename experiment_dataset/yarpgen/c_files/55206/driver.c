#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 650618683U;
short var_4 = (short)-25406;
int var_9 = 900966558;
long long int var_10 = -8563374744245878914LL;
unsigned long long int var_12 = 9838820331021140988ULL;
int zero = 0;
int var_13 = 2067157209;
signed char var_14 = (signed char)-93;
short var_15 = (short)-15976;
unsigned short var_16 = (unsigned short)28476;
unsigned short var_17 = (unsigned short)10371;
unsigned int var_18 = 2406836325U;
long long int var_19 = 9115219520178690965LL;
unsigned int var_20 = 1617229996U;
unsigned long long int arr_0 [18] [18] ;
unsigned int arr_1 [18] ;
unsigned char arr_3 [23] ;
long long int arr_4 [23] [23] ;
signed char arr_2 [18] ;
long long int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? 2139941357743175272ULL : 2151410548443528475ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 4132149634U : 1908605815U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 5244659701883518930LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-101 : (signed char)30;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1164938011712781577LL : 2385010982737985127LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
