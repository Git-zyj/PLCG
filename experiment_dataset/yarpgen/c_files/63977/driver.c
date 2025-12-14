#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7847708912861849485ULL;
unsigned int var_4 = 3700691958U;
unsigned char var_7 = (unsigned char)43;
unsigned int var_10 = 1341165544U;
short var_14 = (short)-1077;
signed char var_16 = (signed char)3;
int zero = 0;
unsigned long long int var_18 = 3997893689215477216ULL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 16449226460257172599ULL;
unsigned short arr_0 [17] ;
unsigned long long int arr_1 [17] ;
long long int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)1564;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 12561138316709815491ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 7942178985479785324LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
