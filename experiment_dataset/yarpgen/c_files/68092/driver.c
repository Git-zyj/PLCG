#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)25476;
unsigned short var_3 = (unsigned short)34429;
unsigned short var_6 = (unsigned short)35934;
long long int var_9 = -6585855287595895495LL;
unsigned int var_10 = 458817720U;
int zero = 0;
unsigned int var_13 = 492539268U;
unsigned char var_14 = (unsigned char)115;
unsigned short var_15 = (unsigned short)4859;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
