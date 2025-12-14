#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 993302118U;
short var_2 = (short)18461;
unsigned int var_3 = 2264719164U;
short var_5 = (short)-6134;
short var_11 = (short)13605;
short var_14 = (short)-5795;
int zero = 0;
unsigned int var_15 = 814529278U;
unsigned int var_16 = 2586442141U;
short var_17 = (short)-13007;
short var_18 = (short)-30841;
short var_19 = (short)-2851;
short var_20 = (short)-6125;
short arr_0 [13] ;
short arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)26530;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)-8188;
}

void checksum() {
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
