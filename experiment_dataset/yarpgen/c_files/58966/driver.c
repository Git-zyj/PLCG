#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)87;
unsigned int var_4 = 1342853473U;
unsigned char var_6 = (unsigned char)36;
long long int var_7 = -5884117862390881323LL;
int zero = 0;
signed char var_12 = (signed char)-88;
unsigned int var_13 = 1831932984U;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 11196311370939566780ULL;
signed char var_16 = (signed char)-2;
signed char arr_1 [16] ;
_Bool arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
