#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)52;
signed char var_6 = (signed char)6;
unsigned int var_7 = 1469736898U;
unsigned long long int var_11 = 6227046186402012673ULL;
long long int var_12 = -219000855883864847LL;
long long int var_14 = -2511027403507209190LL;
int zero = 0;
signed char var_16 = (signed char)100;
int var_17 = 1073112416;
short var_18 = (short)-13651;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
