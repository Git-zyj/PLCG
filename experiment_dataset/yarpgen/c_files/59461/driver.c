#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = 1305929979;
_Bool var_5 = (_Bool)0;
short var_9 = (short)6728;
int zero = 0;
unsigned char var_11 = (unsigned char)35;
unsigned long long int var_12 = 18209137945601229052ULL;
short var_13 = (short)2160;
long long int var_14 = 8163152573389689546LL;
unsigned char var_15 = (unsigned char)118;
unsigned long long int var_16 = 10808341158727656318ULL;
unsigned short var_17 = (unsigned short)36660;
unsigned char arr_0 [24] ;
signed char arr_1 [24] ;
signed char arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)109;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (signed char)102;
}

void checksum() {
    hash(&seed, var_11);
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
