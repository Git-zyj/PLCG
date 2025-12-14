#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-1;
signed char var_5 = (signed char)69;
signed char var_10 = (signed char)-81;
unsigned short var_13 = (unsigned short)54882;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_17 = (short)-26945;
signed char var_18 = (signed char)55;
short var_19 = (short)20991;
int var_20 = 912684002;
signed char var_21 = (signed char)-55;
unsigned int var_22 = 2969178517U;
short arr_1 [16] ;
signed char arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)20467;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)-9;
}

void checksum() {
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
