#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23046;
short var_1 = (short)26897;
unsigned long long int var_2 = 15087824844364408500ULL;
long long int var_6 = -1538608701942475494LL;
short var_7 = (short)26291;
unsigned long long int var_8 = 7352914432531987541ULL;
signed char var_9 = (signed char)52;
_Bool var_10 = (_Bool)0;
long long int var_12 = -2287272236510248739LL;
unsigned int var_13 = 708146190U;
int zero = 0;
unsigned long long int var_14 = 2039130301319347118ULL;
short var_15 = (short)3790;
signed char var_16 = (signed char)63;
_Bool var_17 = (_Bool)1;
short var_18 = (short)24770;
long long int arr_2 [25] [25] ;
unsigned short arr_3 [25] [25] ;
long long int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = -6427570335892542753LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)41811;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = -9185318230682928339LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
