#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)56;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 2060175402U;
int var_6 = -1144078396;
unsigned int var_7 = 3401132021U;
int zero = 0;
int var_10 = 206145505;
int var_11 = 1973089286;
short var_12 = (short)-11742;
unsigned long long int var_13 = 2139660580357540372ULL;
signed char var_14 = (signed char)124;
unsigned char var_15 = (unsigned char)46;
_Bool var_16 = (_Bool)0;
_Bool arr_0 [15] [15] ;
long long int arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -5713493439993909265LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
