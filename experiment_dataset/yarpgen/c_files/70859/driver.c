#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1772828608U;
unsigned char var_3 = (unsigned char)124;
int var_4 = -1203141430;
int var_5 = 1868283234;
unsigned int var_7 = 76547790U;
short var_10 = (short)28178;
long long int var_15 = 3449337903548081901LL;
long long int var_17 = 6472103624726616LL;
long long int var_19 = 2263937238295070635LL;
int zero = 0;
short var_20 = (short)-17386;
long long int var_21 = 2927626989725580689LL;
unsigned int var_22 = 3257405947U;
int var_23 = 1424834724;
long long int var_24 = 4560124032766289473LL;
unsigned int var_25 = 4230556335U;
unsigned int var_26 = 953649929U;
unsigned int arr_3 [14] ;
int arr_5 [14] ;
int arr_10 [14] [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 2834916089U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 661872608;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1792525766;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
