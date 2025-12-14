#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1761286281490451355LL;
int var_2 = 678092823;
short var_3 = (short)-25598;
int var_5 = -2038770043;
long long int var_8 = 1753578288142720903LL;
int zero = 0;
short var_14 = (short)-29203;
unsigned long long int var_15 = 2173500077046423364ULL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)6231;
_Bool arr_0 [16] ;
short arr_1 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-19902;
}

void checksum() {
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
