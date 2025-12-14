#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23037;
short var_2 = (short)9362;
long long int var_3 = 4104901942612704093LL;
unsigned long long int var_4 = 17986298524701815736ULL;
int var_6 = -1405403519;
signed char var_7 = (signed char)31;
signed char var_10 = (signed char)-121;
signed char var_12 = (signed char)107;
int var_14 = 853996833;
int zero = 0;
signed char var_15 = (signed char)-16;
unsigned short var_16 = (unsigned short)28227;
long long int var_17 = 7399526524718290902LL;
signed char var_18 = (signed char)48;
long long int arr_1 [12] ;
unsigned long long int arr_2 [12] [12] ;
long long int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = -3120854300012504185LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 16787711819329553655ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 5011292640460887072LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
