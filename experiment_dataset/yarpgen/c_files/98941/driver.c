#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5920936677825280985LL;
unsigned int var_6 = 2166413853U;
long long int var_7 = 2628940290678844432LL;
unsigned char var_9 = (unsigned char)55;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_15 = -291668584;
unsigned long long int var_16 = 3640086388433314114ULL;
int var_17 = 615258544;
signed char var_18 = (signed char)-91;
int var_19 = 1641499387;
int var_20 = -806195831;
unsigned long long int arr_0 [13] ;
unsigned int arr_2 [13] ;
long long int arr_5 [13] ;
long long int arr_3 [13] ;
_Bool arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 14094859128687504222ULL : 15182608129024860944ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 355712774U : 1522689524U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -3649091709845764960LL : -2278661468310668659LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1931890386112395633LL : -4805634780388304484LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
