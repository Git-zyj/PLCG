#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5858;
_Bool var_4 = (_Bool)0;
signed char var_5 = (signed char)-120;
signed char var_6 = (signed char)25;
unsigned short var_7 = (unsigned short)45563;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)76;
int var_12 = -1575909730;
unsigned int var_14 = 3078589182U;
unsigned int var_16 = 2154073705U;
int zero = 0;
unsigned int var_17 = 1922435598U;
signed char var_18 = (signed char)6;
signed char var_19 = (signed char)54;
long long int var_20 = 8615597072578384765LL;
unsigned short var_21 = (unsigned short)38533;
unsigned int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 3634401593U : 37809475U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
