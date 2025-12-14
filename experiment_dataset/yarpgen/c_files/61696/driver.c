#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2897456526955736711ULL;
short var_4 = (short)29135;
int var_5 = -1267649958;
unsigned char var_7 = (unsigned char)152;
unsigned short var_8 = (unsigned short)63344;
unsigned char var_9 = (unsigned char)96;
unsigned short var_10 = (unsigned short)62597;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 574591545U;
signed char var_13 = (signed char)29;
int var_14 = 820929014;
_Bool var_15 = (_Bool)0;
short arr_2 [19] ;
long long int arr_3 [19] [19] ;
unsigned long long int arr_6 [19] ;
int arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (short)-8168;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? -1527618787188431518LL : 67350117727610272LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 338928411877158536ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -1193794447 : 217359735;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
