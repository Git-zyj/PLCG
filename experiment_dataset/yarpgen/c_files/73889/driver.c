#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)30;
signed char var_1 = (signed char)125;
unsigned long long int var_2 = 1194651698900343926ULL;
signed char var_3 = (signed char)-84;
signed char var_4 = (signed char)-114;
short var_5 = (short)17217;
unsigned long long int var_6 = 11019331044366208183ULL;
unsigned int var_7 = 3425995941U;
int zero = 0;
unsigned short var_10 = (unsigned short)36805;
unsigned char var_11 = (unsigned char)190;
int var_12 = 1730443705;
_Bool var_13 = (_Bool)1;
short var_14 = (short)2284;
unsigned int var_15 = 627298135U;
_Bool arr_0 [19] ;
unsigned char arr_8 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned char)225 : (unsigned char)12;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
