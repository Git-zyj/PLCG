#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2701118263U;
short var_5 = (short)-1937;
unsigned int var_6 = 169441735U;
int zero = 0;
long long int var_15 = 7605830013392811153LL;
unsigned long long int var_16 = 7142267060344095037ULL;
unsigned char var_17 = (unsigned char)135;
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
