#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2226658396453234384LL;
unsigned long long int var_4 = 10483118529280678950ULL;
unsigned char var_6 = (unsigned char)55;
unsigned char var_7 = (unsigned char)207;
unsigned int var_9 = 1459842501U;
unsigned short var_11 = (unsigned short)53729;
unsigned short var_18 = (unsigned short)50259;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)13;
unsigned short var_22 = (unsigned short)8949;
short var_23 = (short)18424;
short var_24 = (short)13792;
short var_25 = (short)-21455;
_Bool arr_0 [23] ;
unsigned short arr_1 [23] ;
signed char arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)55764;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-37 : (signed char)80;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
