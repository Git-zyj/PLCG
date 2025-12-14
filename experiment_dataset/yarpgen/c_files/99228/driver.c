#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)6917;
short var_2 = (short)-17757;
unsigned int var_3 = 532780448U;
long long int var_4 = -5786198763682070303LL;
_Bool var_6 = (_Bool)1;
short var_7 = (short)28310;
unsigned short var_10 = (unsigned short)28154;
int zero = 0;
int var_11 = 15979349;
unsigned int var_12 = 4233079299U;
unsigned short var_13 = (unsigned short)31744;
unsigned short arr_7 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)31934 : (unsigned short)57537;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
