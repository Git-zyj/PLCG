#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1360784830;
_Bool var_1 = (_Bool)0;
int var_2 = -1648208490;
short var_4 = (short)-29781;
short var_5 = (short)30043;
unsigned short var_6 = (unsigned short)46574;
unsigned int var_8 = 3711663111U;
int zero = 0;
short var_14 = (short)-7827;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)16423;
short var_17 = (short)-22286;
short var_18 = (short)-22199;
_Bool var_19 = (_Bool)0;
short var_20 = (short)2195;
unsigned short var_21 = (unsigned short)4861;
long long int var_22 = 1701726172179938892LL;
unsigned int var_23 = 2251919721U;
int var_24 = 233512261;
unsigned short var_25 = (unsigned short)65468;
unsigned short arr_7 [18] ;
signed char arr_8 [18] ;
short arr_11 [18] ;
unsigned short arr_15 [18] ;
short arr_16 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)23630 : (unsigned short)47168;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)83 : (signed char)111;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (short)-209 : (short)-32690;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (unsigned short)18390 : (unsigned short)63848;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)8751 : (short)-7433;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
