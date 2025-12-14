#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28620;
unsigned long long int var_3 = 7009228121975330198ULL;
signed char var_12 = (signed char)38;
unsigned int var_13 = 601348392U;
int zero = 0;
signed char var_14 = (signed char)-42;
unsigned short var_15 = (unsigned short)22462;
unsigned char var_16 = (unsigned char)201;
long long int var_17 = -7178515180564666332LL;
_Bool arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
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
