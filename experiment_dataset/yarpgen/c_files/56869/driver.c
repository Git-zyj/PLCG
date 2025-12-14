#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1081299579U;
unsigned short var_5 = (unsigned short)18360;
_Bool var_6 = (_Bool)1;
unsigned char var_14 = (unsigned char)105;
unsigned char var_16 = (unsigned char)125;
int zero = 0;
unsigned long long int var_17 = 13137613758242076324ULL;
unsigned int var_18 = 2920402647U;
unsigned long long int var_19 = 8094261598305070490ULL;
signed char var_20 = (signed char)-15;
int var_21 = 1297104657;
short arr_0 [12] ;
_Bool arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)-12424;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
