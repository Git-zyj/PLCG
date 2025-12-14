#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_2 = (_Bool)1;
long long int var_3 = 4149666117712172741LL;
_Bool var_5 = (_Bool)1;
short var_6 = (short)9841;
unsigned char var_7 = (unsigned char)149;
unsigned char var_8 = (unsigned char)251;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)180;
int zero = 0;
unsigned char var_13 = (unsigned char)115;
unsigned int var_14 = 1269134062U;
unsigned int var_15 = 517061933U;
unsigned int var_16 = 1463405728U;
unsigned char var_17 = (unsigned char)139;
unsigned int var_18 = 4040161653U;
unsigned short var_19 = (unsigned short)30360;
unsigned short arr_0 [13] ;
int arr_1 [13] ;
long long int arr_4 [13] ;
unsigned long long int arr_5 [13] [13] ;
_Bool arr_2 [13] ;
int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)28355;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 785482342;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -7768284878555805355LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = 8663074660395675807ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 487523215;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
