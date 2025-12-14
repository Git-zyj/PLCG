#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7616113597287526229LL;
unsigned short var_4 = (unsigned short)65491;
short var_7 = (short)-20763;
unsigned short var_9 = (unsigned short)31578;
int zero = 0;
unsigned char var_14 = (unsigned char)35;
unsigned long long int var_15 = 13541156181317600583ULL;
void init() {
}

void checksum() {
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
