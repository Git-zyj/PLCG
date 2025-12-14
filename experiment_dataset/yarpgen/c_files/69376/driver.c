#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -422137876;
signed char var_2 = (signed char)-103;
unsigned short var_3 = (unsigned short)41616;
short var_4 = (short)-16406;
unsigned char var_5 = (unsigned char)238;
unsigned short var_9 = (unsigned short)4043;
unsigned char var_10 = (unsigned char)20;
unsigned char var_15 = (unsigned char)63;
int zero = 0;
unsigned short var_16 = (unsigned short)26172;
signed char var_17 = (signed char)-42;
int var_18 = -1184354590;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)101;
int arr_0 [18] [18] ;
unsigned char arr_7 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? -2018957283 : -482953533;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)212 : (unsigned char)226;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
