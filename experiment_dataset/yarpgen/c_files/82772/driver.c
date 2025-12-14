#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1022608200;
signed char var_4 = (signed char)105;
unsigned short var_5 = (unsigned short)10545;
unsigned char var_7 = (unsigned char)246;
unsigned long long int var_8 = 15195288179457374362ULL;
unsigned short var_10 = (unsigned short)35382;
short var_12 = (short)-21429;
int zero = 0;
int var_13 = -1614035155;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2102763657U;
short var_16 = (short)3598;
signed char var_17 = (signed char)-70;
unsigned int var_18 = 3555177974U;
unsigned int var_19 = 2397696175U;
unsigned char var_20 = (unsigned char)51;
_Bool arr_0 [11] ;
unsigned char arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (unsigned char)85;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
