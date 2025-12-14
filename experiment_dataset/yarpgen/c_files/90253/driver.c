#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)55213;
unsigned long long int var_6 = 14357525437889097495ULL;
short var_7 = (short)31595;
unsigned int var_11 = 779482109U;
long long int var_12 = -6578985572123281264LL;
int zero = 0;
unsigned char var_15 = (unsigned char)87;
signed char var_16 = (signed char)66;
int var_17 = -2018815535;
signed char var_18 = (signed char)-126;
unsigned long long int var_19 = 10424181764141556485ULL;
_Bool var_20 = (_Bool)1;
int arr_0 [14] ;
_Bool arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 417013401 : -2102617591;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
