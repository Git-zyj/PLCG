#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)90;
unsigned char var_7 = (unsigned char)66;
signed char var_9 = (signed char)121;
unsigned int var_10 = 903842490U;
int zero = 0;
short var_15 = (short)9395;
unsigned char var_16 = (unsigned char)234;
long long int var_17 = 2734405772673394123LL;
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
