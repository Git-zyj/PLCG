#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1616236633;
signed char var_1 = (signed char)-52;
unsigned long long int var_3 = 12053599067713877803ULL;
unsigned long long int var_4 = 13487686356864273512ULL;
unsigned short var_5 = (unsigned short)60543;
unsigned short var_6 = (unsigned short)13795;
int var_7 = -819339045;
unsigned long long int var_9 = 5835666005429053257ULL;
signed char var_10 = (signed char)94;
signed char var_11 = (signed char)-85;
unsigned short var_12 = (unsigned short)997;
_Bool var_14 = (_Bool)0;
short var_15 = (short)14872;
signed char var_16 = (signed char)76;
unsigned int var_17 = 1876196125U;
signed char var_18 = (signed char)-111;
unsigned char var_19 = (unsigned char)206;
int zero = 0;
unsigned int var_20 = 1870557732U;
long long int var_21 = -4335454007782607517LL;
int var_22 = -399762821;
_Bool var_23 = (_Bool)1;
short var_24 = (short)-15073;
short var_25 = (short)95;
int arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 861289830;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
