#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2575498104019509151LL;
unsigned long long int var_1 = 8394696577849266637ULL;
short var_2 = (short)13188;
unsigned long long int var_3 = 1429048553599978226ULL;
unsigned char var_4 = (unsigned char)111;
unsigned char var_5 = (unsigned char)245;
unsigned short var_6 = (unsigned short)44525;
_Bool var_7 = (_Bool)1;
short var_8 = (short)27410;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 12136957114732299696ULL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 10009211062498553874ULL;
unsigned long long int var_13 = 10915617552045857676ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = -6161172470192954307LL;
short var_16 = (short)29801;
unsigned short var_17 = (unsigned short)45494;
int var_18 = -883584864;
long long int var_19 = 8798917046321007127LL;
short arr_0 [21] ;
signed char arr_1 [21] ;
signed char arr_2 [21] ;
unsigned short arr_3 [21] ;
unsigned char arr_7 [21] ;
unsigned long long int arr_8 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)-17903;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned short)28006;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 1330335511714237971ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
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
