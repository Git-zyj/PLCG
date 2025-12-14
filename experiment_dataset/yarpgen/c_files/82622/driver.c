#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)234;
unsigned int var_2 = 323532581U;
unsigned char var_4 = (unsigned char)57;
long long int var_5 = 5208667514875215015LL;
short var_6 = (short)-31796;
int var_7 = 960675128;
_Bool var_9 = (_Bool)0;
short var_11 = (short)-777;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = -259283251;
long long int var_14 = -4609807734169036658LL;
int var_15 = 2099177627;
short var_16 = (short)-18622;
unsigned int var_17 = 1647754814U;
_Bool var_18 = (_Bool)0;
long long int var_19 = 1421137299301402LL;
int arr_1 [24] ;
unsigned long long int arr_3 [20] ;
int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1248347722;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 9790431572269513696ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 299415645;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
