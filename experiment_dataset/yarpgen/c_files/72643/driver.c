#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_4 = (short)-7112;
unsigned int var_6 = 354740582U;
unsigned char var_7 = (unsigned char)191;
unsigned int var_8 = 330951800U;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)1;
short var_11 = (short)3307;
signed char var_16 = (signed char)48;
unsigned int var_18 = 3764445761U;
unsigned short var_19 = (unsigned short)30129;
int zero = 0;
unsigned char var_20 = (unsigned char)246;
short var_21 = (short)-27861;
int var_22 = -1039762490;
int var_23 = -630128851;
unsigned long long int var_24 = 15293718389435945053ULL;
unsigned int arr_0 [16] ;
long long int arr_1 [16] ;
signed char arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 3204813554U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 8601852972966516686LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)-53;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
