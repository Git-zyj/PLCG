#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 6477276331148653385ULL;
int var_7 = -393654563;
unsigned int var_8 = 3673335548U;
unsigned short var_9 = (unsigned short)25644;
int zero = 0;
short var_10 = (short)-18131;
long long int var_11 = 5983547855286425816LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
