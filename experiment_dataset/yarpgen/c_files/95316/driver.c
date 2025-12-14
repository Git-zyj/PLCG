#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)24764;
unsigned long long int var_7 = 11139111504081384397ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)-70;
unsigned int var_13 = 2349975891U;
unsigned short var_14 = (unsigned short)19225;
_Bool var_15 = (_Bool)0;
_Bool arr_3 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
