#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)1791;
unsigned short var_5 = (unsigned short)36657;
unsigned char var_7 = (unsigned char)208;
int var_9 = -1903972578;
unsigned long long int var_13 = 13531405621484619718ULL;
unsigned int var_15 = 420512375U;
int zero = 0;
unsigned short var_16 = (unsigned short)20009;
unsigned long long int var_17 = 15715355640995167802ULL;
void init() {
}

void checksum() {
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
