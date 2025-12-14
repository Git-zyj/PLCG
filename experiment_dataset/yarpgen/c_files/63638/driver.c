#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3876478827U;
int var_2 = -1579033806;
unsigned int var_6 = 765274596U;
short var_9 = (short)30406;
signed char var_10 = (signed char)46;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-59;
int var_16 = -1940282231;
int zero = 0;
short var_18 = (short)-27646;
signed char var_19 = (signed char)39;
_Bool var_20 = (_Bool)1;
short var_21 = (short)18554;
unsigned int var_22 = 3158458301U;
unsigned short arr_0 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)48226;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
