#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)76;
unsigned short var_5 = (unsigned short)55526;
unsigned short var_8 = (unsigned short)891;
_Bool var_9 = (_Bool)0;
long long int var_12 = -8434314579827678482LL;
unsigned int var_16 = 4046050824U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 963808788U;
short var_20 = (short)-18778;
unsigned int var_21 = 2312985079U;
unsigned short var_22 = (unsigned short)12305;
_Bool arr_0 [20] ;
unsigned int arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 439475878U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
