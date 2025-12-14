#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)24;
long long int var_4 = 7016184170032301461LL;
signed char var_12 = (signed char)-70;
short var_13 = (short)27570;
int zero = 0;
int var_15 = -524454410;
unsigned char var_16 = (unsigned char)11;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
