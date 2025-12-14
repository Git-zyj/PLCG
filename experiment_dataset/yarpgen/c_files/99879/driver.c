#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1689035485;
unsigned long long int var_1 = 12255220312537735777ULL;
int var_2 = 1714001702;
int var_3 = 309675043;
unsigned char var_5 = (unsigned char)248;
long long int var_6 = 3911549909415172653LL;
unsigned long long int var_7 = 210134941247872316ULL;
signed char var_8 = (signed char)90;
unsigned short var_9 = (unsigned short)43905;
int var_10 = -888583642;
long long int var_11 = 7894620768739222594LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 364043479U;
short var_14 = (short)579;
int var_15 = -1133460151;
short arr_0 [15] ;
unsigned short arr_1 [15] [15] ;
unsigned char arr_2 [15] [15] [15] ;
unsigned long long int arr_6 [15] ;
unsigned long long int arr_7 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)14042 : (short)-9905;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)38666 : (unsigned short)15683;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)155;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 10296749651892262323ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 570820508982754124ULL : 14991056110060203219ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
