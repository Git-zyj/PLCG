#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -213048058;
int var_2 = -1524517194;
signed char var_3 = (signed char)12;
short var_6 = (short)-29266;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)212;
int zero = 0;
unsigned int var_12 = 3755395070U;
short var_13 = (short)1775;
unsigned short var_14 = (unsigned short)49762;
long long int var_15 = 4852940109644967898LL;
long long int var_16 = 8810905325713014095LL;
short var_17 = (short)29738;
unsigned short arr_5 [23] [23] [23] ;
long long int arr_6 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)38659 : (unsigned short)35834;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 5289253991205330466LL : 7069104109245723334LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
