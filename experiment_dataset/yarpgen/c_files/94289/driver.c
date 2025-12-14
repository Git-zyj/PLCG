#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26758;
int var_2 = -222001259;
unsigned char var_4 = (unsigned char)201;
int var_5 = -190907930;
unsigned char var_9 = (unsigned char)187;
unsigned short var_13 = (unsigned short)33428;
int var_14 = 828909472;
unsigned short var_15 = (unsigned short)64461;
int zero = 0;
unsigned char var_16 = (unsigned char)50;
unsigned char var_17 = (unsigned char)60;
long long int var_18 = -5930851547043122195LL;
unsigned int var_19 = 1956459605U;
unsigned long long int var_20 = 10854815691555442319ULL;
unsigned char arr_0 [11] ;
_Bool arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)70 : (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
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
