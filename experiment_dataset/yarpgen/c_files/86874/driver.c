#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4808337915855473846LL;
long long int var_3 = 2956809503650469215LL;
long long int var_4 = 2179620369554702917LL;
short var_5 = (short)-819;
signed char var_6 = (signed char)59;
int var_7 = -574241501;
signed char var_9 = (signed char)2;
unsigned char var_10 = (unsigned char)107;
int var_12 = -1720658082;
unsigned short var_14 = (unsigned short)50493;
int zero = 0;
unsigned int var_15 = 2914298661U;
long long int var_16 = -8931850804923572660LL;
long long int var_17 = -7312396209735944204LL;
long long int var_18 = -1002791596721788476LL;
long long int arr_0 [15] ;
signed char arr_1 [15] ;
unsigned short arr_2 [15] [15] ;
short arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -5857388185370770520LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)7064;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)-10239;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
