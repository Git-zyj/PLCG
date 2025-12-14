#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2292000712U;
unsigned short var_2 = (unsigned short)1457;
signed char var_3 = (signed char)-115;
unsigned short var_6 = (unsigned short)28287;
_Bool var_7 = (_Bool)1;
unsigned short var_8 = (unsigned short)47828;
unsigned int var_11 = 571741458U;
unsigned short var_13 = (unsigned short)63634;
unsigned int var_14 = 166163295U;
unsigned long long int var_16 = 15163519288883483005ULL;
int zero = 0;
short var_18 = (short)6205;
unsigned char var_19 = (unsigned char)196;
int var_20 = -177313320;
unsigned char var_21 = (unsigned char)219;
unsigned short var_22 = (unsigned short)33784;
_Bool var_23 = (_Bool)1;
int arr_2 [11] ;
int arr_4 [22] [22] ;
short arr_5 [22] ;
_Bool arr_6 [22] ;
_Bool arr_3 [11] ;
unsigned short arr_7 [22] ;
signed char arr_8 [22] ;
unsigned short arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 1668418194;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 2041809194 : -487332801;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (short)-26907;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)43623 : (unsigned short)40821;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)87 : (signed char)46;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)2973 : (unsigned short)54282;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
