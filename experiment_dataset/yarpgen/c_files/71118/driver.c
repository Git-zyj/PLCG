#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22747;
int var_1 = 1394981707;
signed char var_3 = (signed char)32;
unsigned char var_6 = (unsigned char)112;
signed char var_8 = (signed char)-73;
unsigned char var_9 = (unsigned char)222;
short var_10 = (short)-11536;
unsigned int var_13 = 2037869011U;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-51;
unsigned long long int var_17 = 3788523581089794993ULL;
unsigned long long int var_18 = 2277607634043013502ULL;
unsigned long long int var_19 = 9663387358724163005ULL;
signed char var_20 = (signed char)-1;
long long int var_21 = -1862807244871103942LL;
_Bool var_22 = (_Bool)1;
long long int var_23 = 1590013300715592425LL;
int var_24 = -472792061;
unsigned int var_25 = 3440876316U;
unsigned int arr_0 [25] ;
signed char arr_1 [25] [25] ;
unsigned char arr_2 [25] ;
unsigned long long int arr_4 [24] ;
signed char arr_6 [19] ;
unsigned char arr_5 [24] ;
_Bool arr_9 [19] ;
unsigned long long int arr_10 [19] ;
unsigned char arr_11 [19] ;
signed char arr_15 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3657042146U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 11214623298971879380ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (signed char)42;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = 4523706637708237491ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (signed char)79 : (signed char)118;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
