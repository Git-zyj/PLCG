#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)1133;
short var_6 = (short)19471;
unsigned char var_8 = (unsigned char)11;
unsigned char var_12 = (unsigned char)169;
int zero = 0;
long long int var_14 = 1571146438416455384LL;
int var_15 = -333828453;
unsigned char var_16 = (unsigned char)232;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
