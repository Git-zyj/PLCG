#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4637194491257834773LL;
unsigned long long int var_5 = 4443035231090699741ULL;
unsigned char var_10 = (unsigned char)57;
unsigned long long int var_11 = 4026156507623773478ULL;
unsigned char var_12 = (unsigned char)146;
int zero = 0;
unsigned char var_15 = (unsigned char)193;
unsigned int var_16 = 1581703096U;
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
