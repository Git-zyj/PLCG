#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1519691855;
int var_2 = 458373432;
int var_3 = 2118956087;
int var_4 = 1283029555;
int var_6 = 1879300780;
unsigned int var_9 = 4128259660U;
_Bool var_11 = (_Bool)0;
int zero = 0;
int var_12 = 658519696;
unsigned char var_13 = (unsigned char)23;
unsigned int var_14 = 271856504U;
unsigned int var_15 = 574000036U;
short var_16 = (short)948;
int var_17 = -900188736;
_Bool arr_0 [18] ;
unsigned char arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)140;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
