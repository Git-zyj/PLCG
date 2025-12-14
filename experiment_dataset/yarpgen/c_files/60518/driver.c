#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7800032391890301LL;
int var_5 = 1376526036;
int var_7 = 1273475986;
long long int var_12 = -4109411966242362439LL;
int zero = 0;
signed char var_19 = (signed char)-81;
long long int var_20 = -8434780505209799421LL;
signed char var_21 = (signed char)-102;
_Bool var_22 = (_Bool)0;
int var_23 = 1058078845;
_Bool arr_0 [25] ;
unsigned short arr_4 [23] ;
short arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned short)55643;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (short)-1786;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
