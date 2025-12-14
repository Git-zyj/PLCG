#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)25232;
unsigned short var_6 = (unsigned short)27760;
unsigned short var_9 = (unsigned short)37085;
int zero = 0;
int var_11 = -2115404688;
unsigned int var_12 = 3601916550U;
unsigned char var_13 = (unsigned char)218;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
