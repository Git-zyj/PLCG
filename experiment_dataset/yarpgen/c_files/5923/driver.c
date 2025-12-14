#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)11230;
signed char var_3 = (signed char)-91;
unsigned short var_6 = (unsigned short)30743;
unsigned short var_9 = (unsigned short)46307;
unsigned short var_12 = (unsigned short)17224;
int zero = 0;
unsigned long long int var_14 = 8425622812865158161ULL;
long long int var_15 = 7689458488282698533LL;
unsigned long long int var_16 = 8955148360908212920ULL;
unsigned short var_17 = (unsigned short)57515;
unsigned long long int var_18 = 11088427365877953420ULL;
unsigned char var_19 = (unsigned char)142;
unsigned char arr_5 [25] [25] ;
signed char arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (signed char)28;
}

void checksum() {
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
