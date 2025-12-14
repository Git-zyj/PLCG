#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4151818143U;
unsigned int var_2 = 1042206886U;
unsigned short var_7 = (unsigned short)52453;
int var_9 = -2091859312;
unsigned int var_11 = 4066514755U;
_Bool var_16 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-7;
short var_21 = (short)-25209;
int var_22 = 41436531;
long long int var_23 = 5549673466655700776LL;
unsigned short var_24 = (unsigned short)15771;
int var_25 = -553583824;
signed char arr_4 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)62;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
