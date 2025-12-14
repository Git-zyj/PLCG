#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
int var_3 = 1272741659;
unsigned char var_5 = (unsigned char)138;
_Bool var_6 = (_Bool)0;
signed char var_9 = (signed char)-10;
short var_12 = (short)-2791;
unsigned int var_13 = 1116772267U;
int zero = 0;
unsigned short var_14 = (unsigned short)44590;
signed char var_15 = (signed char)-120;
signed char var_16 = (signed char)-54;
short var_17 = (short)17108;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3148634173U;
unsigned char var_20 = (unsigned char)139;
unsigned int arr_4 [13] ;
unsigned char arr_5 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2830707313U : 2890038518U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)29 : (unsigned char)109;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
