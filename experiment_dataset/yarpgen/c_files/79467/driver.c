#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)45469;
unsigned short var_8 = (unsigned short)30545;
unsigned short var_9 = (unsigned short)49106;
signed char var_10 = (signed char)-70;
int zero = 0;
long long int var_15 = 7388393396884023686LL;
short var_16 = (short)-25910;
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
