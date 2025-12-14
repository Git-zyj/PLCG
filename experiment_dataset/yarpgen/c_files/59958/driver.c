#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1033232179;
int var_2 = -156395150;
_Bool var_4 = (_Bool)1;
int zero = 0;
unsigned short var_11 = (unsigned short)20311;
unsigned long long int var_12 = 3281159214792163364ULL;
long long int var_13 = 6234125432031187297LL;
unsigned long long int var_14 = 2331080630110733323ULL;
int var_15 = 2112146920;
unsigned int var_16 = 2789258301U;
_Bool var_17 = (_Bool)0;
_Bool arr_0 [24] [24] ;
unsigned long long int arr_1 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 14349423563650431743ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
