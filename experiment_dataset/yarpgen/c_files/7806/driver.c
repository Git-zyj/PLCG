#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)121;
signed char var_2 = (signed char)89;
unsigned int var_4 = 559525951U;
unsigned short var_10 = (unsigned short)41143;
_Bool var_13 = (_Bool)1;
unsigned short var_15 = (unsigned short)47706;
int zero = 0;
unsigned long long int var_20 = 17731726310224699445ULL;
unsigned char var_21 = (unsigned char)240;
long long int var_22 = -1463035628773531310LL;
unsigned short var_23 = (unsigned short)5444;
unsigned char var_24 = (unsigned char)171;
unsigned int var_25 = 960350148U;
int arr_2 [22] [22] ;
long long int arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? -1655469879 : -401075907;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = -77847314592207495LL;
}

void checksum() {
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
