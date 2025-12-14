#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)-17136;
signed char var_9 = (signed char)-80;
short var_10 = (short)19808;
signed char var_12 = (signed char)62;
int zero = 0;
long long int var_14 = -8889119279562267755LL;
unsigned char var_15 = (unsigned char)95;
signed char var_16 = (signed char)115;
int var_17 = -1889043398;
long long int var_18 = 8691664819914451808LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
