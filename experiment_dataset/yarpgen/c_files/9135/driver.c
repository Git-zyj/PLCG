#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3522161510U;
unsigned int var_1 = 2173060768U;
unsigned short var_7 = (unsigned short)15812;
unsigned long long int var_11 = 4814177382712808441ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)107;
unsigned long long int var_21 = 7017397718195462595ULL;
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
