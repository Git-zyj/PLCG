#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8552238878153674168LL;
unsigned long long int var_5 = 3054702619745947373ULL;
long long int var_6 = -2494861875253054324LL;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)7176;
unsigned char var_11 = (unsigned char)63;
long long int var_13 = 5084138228528667667LL;
long long int var_14 = -556524795395276520LL;
long long int var_15 = -6193636407690837249LL;
int zero = 0;
short var_16 = (short)-3054;
long long int var_17 = -7511309261344005741LL;
unsigned short var_18 = (unsigned short)62841;
_Bool var_19 = (_Bool)0;
unsigned short arr_0 [11] ;
unsigned int arr_1 [11] [11] ;
short arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)40471;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 768266631U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (short)-21704;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
