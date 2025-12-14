#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38805;
unsigned char var_9 = (unsigned char)22;
unsigned int var_15 = 3361443054U;
unsigned int var_17 = 2818402062U;
int zero = 0;
unsigned long long int var_20 = 12182775445384258601ULL;
signed char var_21 = (signed char)90;
unsigned char var_22 = (unsigned char)199;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
