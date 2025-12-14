#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17371211268144826257ULL;
unsigned short var_2 = (unsigned short)16083;
short var_3 = (short)2889;
long long int var_4 = 4878585423029963615LL;
signed char var_7 = (signed char)110;
unsigned short var_8 = (unsigned short)22885;
_Bool var_10 = (_Bool)1;
int var_12 = -1143713186;
int zero = 0;
long long int var_14 = 8632369520827788446LL;
signed char var_15 = (signed char)5;
int var_16 = 1885626182;
unsigned int var_17 = 143514068U;
void init() {
}

void checksum() {
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
