#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_4 = 8330707510618573902LL;
unsigned short var_5 = (unsigned short)29045;
int var_6 = 715113659;
_Bool var_9 = (_Bool)0;
int var_10 = 315822419;
unsigned char var_11 = (unsigned char)17;
signed char var_14 = (signed char)-4;
unsigned short var_15 = (unsigned short)65432;
unsigned short var_16 = (unsigned short)57373;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 16632766906587541966ULL;
unsigned int var_20 = 828715009U;
long long int var_21 = 7772953390023634431LL;
short var_22 = (short)-16640;
long long int var_23 = 7650542557807826663LL;
short var_24 = (short)4377;
int var_25 = -570606610;
unsigned short arr_0 [11] ;
signed char arr_1 [11] ;
unsigned int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)39644;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 2756130424U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
