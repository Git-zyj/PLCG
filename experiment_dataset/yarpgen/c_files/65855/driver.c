#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 379732510U;
unsigned long long int var_9 = 740261178929387219ULL;
unsigned char var_15 = (unsigned char)76;
signed char var_16 = (signed char)-3;
int zero = 0;
unsigned long long int var_17 = 13692217541853311497ULL;
long long int var_18 = 2226363031980356859LL;
void init() {
}

void checksum() {
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
