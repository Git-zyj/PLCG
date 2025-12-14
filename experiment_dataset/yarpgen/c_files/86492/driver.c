#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 641953489;
unsigned short var_3 = (unsigned short)57282;
signed char var_5 = (signed char)47;
short var_8 = (short)-30603;
unsigned int var_9 = 218674175U;
int var_11 = -1582456721;
short var_12 = (short)-23472;
int var_13 = 347043487;
int zero = 0;
unsigned short var_14 = (unsigned short)46563;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 2297065131692210034ULL;
unsigned char var_17 = (unsigned char)174;
unsigned short arr_0 [16] ;
long long int arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)24398;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -6873646435639723798LL;
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
