#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5302201621702821303LL;
long long int var_4 = 3907664695130571630LL;
unsigned char var_5 = (unsigned char)202;
unsigned char var_6 = (unsigned char)163;
unsigned char var_13 = (unsigned char)238;
int zero = 0;
int var_15 = 890576323;
unsigned char var_16 = (unsigned char)252;
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
