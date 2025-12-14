#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2384329103U;
int var_5 = -159412137;
unsigned short var_9 = (unsigned short)19445;
int zero = 0;
long long int var_12 = 455591852722232072LL;
unsigned char var_13 = (unsigned char)42;
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
