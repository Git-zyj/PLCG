#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned int var_6 = 1288424649U;
short var_8 = (short)-17656;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = 63813137;
unsigned short var_22 = (unsigned short)29792;
unsigned short var_23 = (unsigned short)11911;
long long int var_24 = 7893228578382318481LL;
unsigned char arr_0 [21] [21] ;
unsigned char arr_2 [21] ;
int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)122 : (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -2145425916 : -2036924102;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
