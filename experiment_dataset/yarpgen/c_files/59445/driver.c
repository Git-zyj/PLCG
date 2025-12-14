#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)7;
long long int var_1 = -8219439434281436032LL;
long long int var_3 = -7645047828049120454LL;
signed char var_4 = (signed char)-107;
unsigned int var_5 = 4284211475U;
short var_7 = (short)-29323;
signed char var_8 = (signed char)85;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 940242744U;
unsigned char var_12 = (unsigned char)14;
signed char var_14 = (signed char)-73;
int zero = 0;
unsigned short var_15 = (unsigned short)61504;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 3145790185U;
long long int var_18 = 7347327077607534132LL;
signed char arr_4 [25] ;
int arr_5 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)70 : (signed char)-93;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 969878685 : -450270719;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
