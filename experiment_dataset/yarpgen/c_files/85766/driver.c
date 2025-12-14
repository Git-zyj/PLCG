#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)52;
unsigned long long int var_3 = 1437806229737870392ULL;
_Bool var_7 = (_Bool)1;
long long int var_8 = -8016910978195743852LL;
unsigned short var_9 = (unsigned short)19735;
unsigned short var_10 = (unsigned short)46282;
unsigned short var_11 = (unsigned short)7477;
int zero = 0;
unsigned long long int var_13 = 15297176793110947808ULL;
int var_14 = 338378198;
signed char var_15 = (signed char)-13;
short var_16 = (short)-22192;
unsigned short var_17 = (unsigned short)20292;
short var_18 = (short)23404;
unsigned long long int var_19 = 11013984647285719031ULL;
unsigned char arr_0 [11] ;
unsigned char arr_1 [11] ;
unsigned long long int arr_3 [25] ;
short arr_6 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 5254497880334888198ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (short)30758;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
