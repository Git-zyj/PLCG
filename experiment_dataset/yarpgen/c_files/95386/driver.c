#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3859789900U;
signed char var_4 = (signed char)44;
unsigned long long int var_12 = 4303813136674203840ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)35512;
long long int var_15 = 5820914944962874813LL;
unsigned char var_16 = (unsigned char)54;
long long int var_17 = -2105962481229629704LL;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-23116;
_Bool var_20 = (_Bool)0;
unsigned long long int arr_3 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 16484846917603729744ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
