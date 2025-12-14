#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)25389;
short var_5 = (short)-12158;
short var_7 = (short)2770;
unsigned short var_12 = (unsigned short)65189;
_Bool var_13 = (_Bool)0;
int var_14 = 1615437364;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -4318735181899623545LL;
unsigned char var_20 = (unsigned char)59;
signed char var_21 = (signed char)18;
short var_22 = (short)31303;
_Bool arr_1 [11] ;
int arr_2 [11] ;
int arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = -1923434156;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 1654112910;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
