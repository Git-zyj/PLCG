#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2879657815U;
unsigned long long int var_2 = 2672311409387452700ULL;
unsigned short var_5 = (unsigned short)6854;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 1478525777U;
signed char var_9 = (signed char)122;
unsigned long long int var_10 = 8428702473590589113ULL;
unsigned int var_11 = 3105107011U;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 12580318394435250289ULL;
long long int var_17 = -2187553758839981534LL;
unsigned int var_18 = 972306206U;
long long int arr_2 [17] ;
unsigned int arr_3 [17] [17] ;
long long int arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -3482078895204291213LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 1174642203U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = -8683327367342949803LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
