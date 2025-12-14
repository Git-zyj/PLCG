#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2925606799U;
unsigned char var_5 = (unsigned char)82;
short var_13 = (short)-13757;
unsigned int var_17 = 3649123U;
int zero = 0;
unsigned short var_18 = (unsigned short)37540;
int var_19 = 1913826223;
int var_20 = -840968464;
signed char var_21 = (signed char)-46;
long long int arr_0 [11] ;
signed char arr_2 [11] ;
signed char arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -3234971518818898663LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (signed char)-54;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
