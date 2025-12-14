#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-32039;
unsigned long long int var_4 = 16311697811827997214ULL;
unsigned long long int var_6 = 7762365129329347805ULL;
short var_7 = (short)29324;
unsigned int var_8 = 4201932428U;
unsigned long long int var_10 = 4389005283384512241ULL;
_Bool var_11 = (_Bool)1;
unsigned short var_15 = (unsigned short)28768;
int zero = 0;
unsigned short var_17 = (unsigned short)57439;
int var_18 = 1245720146;
short var_19 = (short)-14616;
short var_20 = (short)21779;
long long int var_21 = 7471647178193739482LL;
signed char arr_0 [24] [24] ;
short arr_2 [24] [24] ;
long long int arr_3 [24] [24] ;
unsigned long long int arr_5 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (short)30793;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = -4677715811176893543LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 15658300042739718186ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
