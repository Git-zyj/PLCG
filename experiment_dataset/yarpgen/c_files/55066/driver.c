#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-15390;
unsigned int var_11 = 2000582496U;
_Bool var_12 = (_Bool)0;
signed char var_16 = (signed char)56;
int zero = 0;
unsigned long long int var_19 = 11885666797720698003ULL;
int var_20 = 1831545819;
unsigned long long int var_21 = 11043755096003987816ULL;
_Bool var_22 = (_Bool)1;
int var_23 = 1575244800;
short arr_0 [20] ;
short arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)295;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (short)21917;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
