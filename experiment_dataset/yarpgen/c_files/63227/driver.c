#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-82;
unsigned int var_3 = 3919787501U;
long long int var_4 = -7498005319274970090LL;
unsigned int var_5 = 1255516529U;
unsigned int var_6 = 2436891019U;
unsigned short var_7 = (unsigned short)39254;
short var_9 = (short)-19344;
int zero = 0;
short var_10 = (short)30887;
long long int var_11 = 295777038974810802LL;
unsigned int var_12 = 3409562074U;
unsigned long long int var_13 = 5836454293571097009ULL;
unsigned short arr_4 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)49339;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
