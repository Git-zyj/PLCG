#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3407360231418867725ULL;
int var_3 = 867647507;
unsigned short var_9 = (unsigned short)8693;
long long int var_11 = -5850534846006045883LL;
int zero = 0;
long long int var_15 = -4386078892893496063LL;
unsigned char var_16 = (unsigned char)65;
unsigned char var_17 = (unsigned char)105;
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
