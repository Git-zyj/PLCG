#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10988116053768808043ULL;
int var_3 = -661600175;
unsigned int var_4 = 39575131U;
unsigned short var_6 = (unsigned short)62721;
unsigned long long int var_7 = 6629681084094818576ULL;
signed char var_8 = (signed char)2;
long long int var_9 = -2985921710750031055LL;
unsigned short var_17 = (unsigned short)44237;
int zero = 0;
long long int var_18 = -4136255500061981930LL;
unsigned long long int var_19 = 13987622153616474982ULL;
signed char var_20 = (signed char)-62;
signed char var_21 = (signed char)-101;
int var_22 = -1738792921;
unsigned short var_23 = (unsigned short)54598;
unsigned char var_24 = (unsigned char)104;
unsigned char arr_0 [15] ;
unsigned long long int arr_1 [15] ;
unsigned long long int arr_6 [21] ;
int arr_7 [21] ;
unsigned short arr_5 [15] ;
unsigned short arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 6177449648803893230ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = 16228913785767685323ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = -2111804607;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned short)5736;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)4597 : (unsigned short)31869;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
