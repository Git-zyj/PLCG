#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25187;
signed char var_1 = (signed char)-36;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1832814887U;
unsigned char var_9 = (unsigned char)87;
long long int var_10 = -5880916555177369458LL;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)222;
unsigned int var_17 = 2808001105U;
int zero = 0;
int var_19 = -1200175410;
long long int var_20 = -6012728219194799441LL;
unsigned char var_21 = (unsigned char)231;
unsigned short var_22 = (unsigned short)5269;
signed char var_23 = (signed char)-78;
_Bool arr_0 [21] ;
unsigned short arr_1 [21] [21] ;
short arr_3 [10] ;
_Bool arr_4 [10] ;
short arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)36216;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)-10140;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)25877 : (short)19408;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
