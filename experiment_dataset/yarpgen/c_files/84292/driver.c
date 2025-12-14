#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3483024215560387468LL;
long long int var_6 = 5549755824858309400LL;
short var_7 = (short)11535;
short var_8 = (short)11577;
unsigned long long int var_10 = 551998897620298005ULL;
long long int var_17 = -3126326461499946562LL;
int zero = 0;
unsigned int var_20 = 735634951U;
unsigned char var_21 = (unsigned char)208;
unsigned int var_22 = 944610510U;
long long int var_23 = -6803188582186909367LL;
unsigned int var_24 = 2399633341U;
signed char arr_4 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)51;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
