#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_4 = -2133204982;
unsigned short var_5 = (unsigned short)9890;
unsigned short var_8 = (unsigned short)37074;
unsigned short var_9 = (unsigned short)15174;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)238;
long long int var_16 = -7711781262601912048LL;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 854684478U;
unsigned int var_19 = 2341013666U;
unsigned char var_20 = (unsigned char)10;
short arr_1 [12] ;
_Bool arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)-19859;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
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
