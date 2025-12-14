#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = 912727315149847556LL;
short var_5 = (short)23667;
signed char var_10 = (signed char)-37;
short var_12 = (short)-10423;
long long int var_15 = 7187931041635020106LL;
int zero = 0;
short var_16 = (short)189;
unsigned int var_17 = 480296849U;
signed char var_18 = (signed char)-94;
int var_19 = -1791743450;
short var_20 = (short)15487;
unsigned char var_21 = (unsigned char)13;
signed char var_22 = (signed char)13;
long long int arr_0 [16] ;
_Bool arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 2881734096653821769LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
