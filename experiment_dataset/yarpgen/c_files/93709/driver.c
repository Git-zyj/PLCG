#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 823248100;
int var_1 = -153157548;
unsigned int var_2 = 2843600930U;
int var_3 = 2028186620;
short var_4 = (short)-16050;
int var_5 = 960794891;
int var_6 = 506199990;
long long int var_7 = 4234276252902754403LL;
unsigned int var_8 = 916985515U;
unsigned char var_9 = (unsigned char)140;
unsigned int var_10 = 2105714109U;
int var_11 = 583759649;
int zero = 0;
int var_12 = -623706246;
int var_13 = -996697693;
int var_14 = -260050447;
short var_15 = (short)10737;
long long int var_16 = -3246645930295069571LL;
int var_17 = 1177118968;
short var_18 = (short)31052;
int var_19 = -685049287;
short arr_20 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_20 [i_0] [i_1] = (short)-10003;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
