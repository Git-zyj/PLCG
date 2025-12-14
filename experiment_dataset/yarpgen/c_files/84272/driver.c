#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-20080;
signed char var_6 = (signed char)83;
unsigned char var_8 = (unsigned char)201;
long long int var_10 = 799178633926515666LL;
int zero = 0;
short var_15 = (short)-24444;
unsigned char var_16 = (unsigned char)168;
unsigned int var_17 = 368489715U;
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
