#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-18;
short var_4 = (short)23526;
unsigned long long int var_5 = 14203798505063397275ULL;
unsigned char var_10 = (unsigned char)2;
unsigned short var_12 = (unsigned short)63204;
int zero = 0;
signed char var_16 = (signed char)48;
short var_17 = (short)-24124;
unsigned short var_18 = (unsigned short)64083;
signed char var_19 = (signed char)75;
signed char var_20 = (signed char)-34;
unsigned short var_21 = (unsigned short)16704;
short arr_2 [19] [19] ;
long long int arr_3 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (short)20669;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = 5018785358274449289LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
