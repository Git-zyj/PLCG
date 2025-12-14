#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)236;
unsigned char var_1 = (unsigned char)119;
signed char var_5 = (signed char)89;
short var_9 = (short)-30423;
int zero = 0;
unsigned short var_12 = (unsigned short)46371;
short var_13 = (short)-31713;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
