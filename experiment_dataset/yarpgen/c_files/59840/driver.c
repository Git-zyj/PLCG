#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 2097639484U;
unsigned short var_9 = (unsigned short)7341;
unsigned char var_13 = (unsigned char)78;
signed char var_15 = (signed char)62;
int zero = 0;
unsigned char var_20 = (unsigned char)39;
signed char var_21 = (signed char)31;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
