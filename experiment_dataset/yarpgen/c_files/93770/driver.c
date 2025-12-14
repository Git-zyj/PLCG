#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)94;
unsigned long long int var_1 = 11230868741076346906ULL;
unsigned char var_2 = (unsigned char)161;
short var_3 = (short)26167;
unsigned char var_4 = (unsigned char)185;
int var_6 = 1321923567;
unsigned char var_7 = (unsigned char)180;
unsigned int var_10 = 3385397651U;
int zero = 0;
unsigned int var_13 = 4093640880U;
unsigned char var_14 = (unsigned char)80;
unsigned int var_15 = 4113297462U;
unsigned short var_16 = (unsigned short)58123;
unsigned char var_17 = (unsigned char)32;
_Bool var_18 = (_Bool)0;
_Bool arr_0 [20] ;
_Bool arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
