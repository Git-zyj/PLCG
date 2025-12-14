#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6970;
signed char var_4 = (signed char)-89;
int var_5 = -505183137;
signed char var_6 = (signed char)-91;
short var_10 = (short)-30960;
unsigned short var_12 = (unsigned short)29668;
long long int var_13 = -8460221673885455262LL;
int zero = 0;
unsigned short var_17 = (unsigned short)35693;
short var_18 = (short)-21726;
long long int var_19 = 6322870507944228337LL;
long long int var_20 = -7093906624454955666LL;
unsigned short var_21 = (unsigned short)64364;
signed char var_22 = (signed char)-99;
unsigned short arr_0 [23] ;
unsigned long long int arr_2 [23] ;
unsigned char arr_3 [23] [23] ;
unsigned char arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)62764;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 2641895453502440223ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)77 : (unsigned char)58;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)108 : (unsigned char)226;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
