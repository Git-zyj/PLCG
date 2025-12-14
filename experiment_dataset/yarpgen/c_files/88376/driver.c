#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)21024;
signed char var_5 = (signed char)-10;
int var_8 = 1899004030;
unsigned char var_11 = (unsigned char)6;
int zero = 0;
long long int var_15 = 6934298779571735296LL;
unsigned long long int var_16 = 18153246733303565814ULL;
short var_17 = (short)18362;
signed char var_18 = (signed char)25;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
