#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 703526489914265730LL;
long long int var_4 = 2706362991443963117LL;
_Bool var_6 = (_Bool)0;
int var_7 = -935084007;
unsigned char var_8 = (unsigned char)28;
unsigned long long int var_11 = 11905760196550745351ULL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1507252964U;
unsigned short var_14 = (unsigned short)47877;
unsigned short var_15 = (unsigned short)58670;
short var_16 = (short)-23697;
unsigned char var_17 = (unsigned char)235;
long long int arr_0 [22] ;
unsigned long long int arr_1 [22] [22] ;
unsigned char arr_3 [22] [22] ;
unsigned char arr_11 [10] ;
unsigned char arr_12 [10] ;
short arr_8 [22] ;
short arr_13 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 8448640514511464347LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 740108090532266850ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (short)25888;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_13 [i_0] = (short)28350;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
