#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1499227398;
short var_3 = (short)-26048;
long long int var_4 = 1886594084929598931LL;
unsigned long long int var_8 = 11190025628193641084ULL;
long long int var_9 = -8187470743273417721LL;
unsigned long long int var_10 = 12427113561838948107ULL;
short var_11 = (short)25632;
int var_13 = -1867569941;
unsigned int var_14 = 2535966160U;
int zero = 0;
int var_16 = 426946222;
signed char var_17 = (signed char)-14;
signed char var_18 = (signed char)27;
unsigned int var_19 = 3729248629U;
signed char arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-47;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
