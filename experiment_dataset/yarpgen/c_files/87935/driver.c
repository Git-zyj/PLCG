#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_3 = (short)-15017;
short var_4 = (short)-2917;
unsigned char var_5 = (unsigned char)186;
unsigned char var_7 = (unsigned char)211;
int var_9 = -46395883;
unsigned long long int var_11 = 10209035339958368605ULL;
int var_13 = 1846724503;
int var_14 = 1409074051;
unsigned short var_16 = (unsigned short)23917;
int zero = 0;
unsigned char var_20 = (unsigned char)178;
unsigned char var_21 = (unsigned char)135;
int var_22 = 1167358773;
_Bool arr_0 [17] ;
int arr_1 [17] [17] ;
short arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 857524242;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (short)17044;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
