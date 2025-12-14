#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)17;
unsigned long long int var_3 = 3021886718210893990ULL;
unsigned int var_4 = 2743422366U;
short var_5 = (short)24635;
int var_6 = -1429816385;
signed char var_7 = (signed char)-11;
signed char var_8 = (signed char)-41;
signed char var_9 = (signed char)-100;
_Bool var_10 = (_Bool)1;
int var_11 = -168752962;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)86;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 1526427355U;
int var_17 = 372597068;
unsigned short arr_3 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)55977;
}

void checksum() {
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
