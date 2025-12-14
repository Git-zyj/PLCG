#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 9795523947262090891ULL;
signed char var_7 = (signed char)-3;
unsigned int var_13 = 1551879198U;
int zero = 0;
unsigned char var_15 = (unsigned char)106;
short var_16 = (short)20568;
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
