#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 81619995257964073LL;
long long int var_2 = 202142361572120800LL;
long long int var_4 = -4887155053926765050LL;
long long int var_11 = -1246177131593805619LL;
_Bool var_12 = (_Bool)0;
_Bool var_14 = (_Bool)0;
long long int var_16 = 8496200271899792155LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = -8796501961807564442LL;
short var_21 = (short)10346;
long long int var_22 = 3592032583835228171LL;
unsigned char arr_0 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)150;
}

void checksum() {
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
