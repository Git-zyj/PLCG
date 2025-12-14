#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3199763327487099231ULL;
unsigned int var_3 = 1318892411U;
long long int var_5 = 5292158419884913248LL;
unsigned char var_7 = (unsigned char)31;
int zero = 0;
int var_11 = 1848757567;
unsigned long long int var_12 = 6961289784431661343ULL;
long long int var_13 = 3725597844865358759LL;
signed char var_14 = (signed char)75;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-17160;
_Bool var_17 = (_Bool)0;
long long int var_18 = -3436235593227204511LL;
short var_19 = (short)-31050;
unsigned int var_20 = 616127555U;
_Bool arr_0 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
