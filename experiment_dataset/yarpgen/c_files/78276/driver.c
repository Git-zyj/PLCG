#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1092144699;
int var_9 = 1437896917;
short var_12 = (short)9200;
int zero = 0;
unsigned char var_14 = (unsigned char)14;
unsigned int var_15 = 1886929130U;
unsigned int var_16 = 1302350281U;
unsigned char var_17 = (unsigned char)69;
unsigned long long int var_18 = 18276538860322010797ULL;
long long int var_19 = 8208669576866461164LL;
long long int var_20 = 3099521197029113439LL;
long long int arr_5 [22] [22] [22] ;
int arr_11 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -2229078407499708959LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? -1103860864 : -1855179793;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
