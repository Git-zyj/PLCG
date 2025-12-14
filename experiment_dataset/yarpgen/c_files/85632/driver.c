#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)89;
unsigned int var_6 = 1628063875U;
signed char var_7 = (signed char)30;
short var_10 = (short)16661;
unsigned int var_11 = 3593888697U;
int zero = 0;
unsigned int var_13 = 2590779542U;
unsigned short var_14 = (unsigned short)33994;
unsigned char var_15 = (unsigned char)37;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
