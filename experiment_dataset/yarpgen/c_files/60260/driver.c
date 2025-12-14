#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3129887949314378346LL;
unsigned char var_5 = (unsigned char)114;
signed char var_9 = (signed char)64;
short var_11 = (short)5330;
unsigned int var_12 = 1692204809U;
signed char var_13 = (signed char)1;
int zero = 0;
long long int var_17 = -3494968449940755951LL;
signed char var_18 = (signed char)110;
_Bool var_19 = (_Bool)1;
_Bool arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
