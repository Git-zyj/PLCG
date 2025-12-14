#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-20695;
long long int var_2 = -8804056437296445962LL;
short var_3 = (short)-15259;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 17283129099708783805ULL;
unsigned long long int var_6 = 5673702019051311400ULL;
unsigned int var_7 = 3140636617U;
short var_8 = (short)-7414;
long long int var_9 = 137100392373938303LL;
short var_10 = (short)27492;
short var_11 = (short)-10243;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)57134;
int var_14 = 1075048534;
_Bool var_15 = (_Bool)1;
int var_16 = -1610564490;
_Bool arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
