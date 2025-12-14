#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1774313997;
int var_5 = -1430806305;
unsigned int var_8 = 773242181U;
short var_10 = (short)5480;
int var_11 = -504943265;
int zero = 0;
long long int var_18 = 628482488322267185LL;
unsigned long long int var_19 = 3696945103965737567ULL;
int var_20 = -584662342;
unsigned char var_21 = (unsigned char)139;
unsigned short var_22 = (unsigned short)877;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-7018;
unsigned int arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 1451099558U : 1393220834U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
