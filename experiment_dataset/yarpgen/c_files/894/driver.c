#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 12424373801748018110ULL;
unsigned long long int var_15 = 3742655822744787873ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)62379;
unsigned long long int var_17 = 11305308836017028266ULL;
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
