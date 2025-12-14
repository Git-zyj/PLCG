#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -8767774346369243023LL;
unsigned char var_7 = (unsigned char)114;
long long int var_8 = -5621428317396423376LL;
signed char var_11 = (signed char)-86;
short var_15 = (short)-18404;
long long int var_17 = -1811310196769712532LL;
int zero = 0;
short var_18 = (short)-29345;
signed char var_19 = (signed char)37;
unsigned char var_20 = (unsigned char)223;
void init() {
}

void checksum() {
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
