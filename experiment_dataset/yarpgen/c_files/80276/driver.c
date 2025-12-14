#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)58;
unsigned char var_2 = (unsigned char)15;
unsigned char var_4 = (unsigned char)125;
unsigned char var_5 = (unsigned char)78;
unsigned short var_6 = (unsigned short)31666;
unsigned long long int var_7 = 7253902598007220405ULL;
short var_10 = (short)18056;
int var_11 = -1222068040;
unsigned long long int var_12 = 14346232770436349228ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)151;
int var_14 = -1304749661;
unsigned long long int var_15 = 3630717572329123083ULL;
unsigned char var_16 = (unsigned char)10;
unsigned char var_17 = (unsigned char)68;
unsigned long long int var_18 = 327809333483393879ULL;
unsigned long long int var_19 = 5476339297570932690ULL;
unsigned int arr_0 [25] ;
_Bool arr_1 [25] ;
_Bool arr_6 [12] [12] ;
unsigned long long int arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 100063355U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 16799012986022703379ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
