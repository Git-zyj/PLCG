#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1560571623;
short var_4 = (short)-7182;
short var_6 = (short)-19334;
_Bool var_7 = (_Bool)1;
unsigned char var_11 = (unsigned char)75;
unsigned char var_14 = (unsigned char)125;
unsigned int var_15 = 1620992943U;
unsigned char var_16 = (unsigned char)174;
unsigned char var_18 = (unsigned char)19;
int zero = 0;
int var_19 = 410697483;
unsigned char var_20 = (unsigned char)235;
void init() {
}

void checksum() {
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
