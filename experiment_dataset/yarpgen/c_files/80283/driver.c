#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)206;
unsigned char var_2 = (unsigned char)163;
long long int var_6 = 3736733180080866107LL;
_Bool var_8 = (_Bool)1;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_19 = (short)14697;
_Bool var_20 = (_Bool)1;
long long int var_21 = 8817385592736949413LL;
long long int var_22 = 930434321785568418LL;
unsigned long long int var_23 = 16820869221904805890ULL;
int arr_1 [23] ;
unsigned long long int arr_3 [23] ;
_Bool arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 439678158;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 14726188507160022382ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
