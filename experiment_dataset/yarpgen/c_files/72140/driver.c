#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)23233;
long long int var_2 = -5241269321310622994LL;
short var_5 = (short)-14636;
short var_7 = (short)-20585;
unsigned int var_8 = 769402707U;
signed char var_10 = (signed char)48;
unsigned int var_12 = 3438805689U;
unsigned char var_14 = (unsigned char)161;
int zero = 0;
unsigned short var_15 = (unsigned short)26567;
unsigned short var_16 = (unsigned short)3752;
int var_17 = 1244482284;
void init() {
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
