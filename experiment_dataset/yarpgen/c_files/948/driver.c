#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 2064703788985186477ULL;
unsigned short var_6 = (unsigned short)11142;
unsigned char var_17 = (unsigned char)16;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 8875247986320796989ULL;
unsigned char var_20 = (unsigned char)242;
unsigned char var_21 = (unsigned char)61;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 3096341810U;
_Bool arr_1 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
