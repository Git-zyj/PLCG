#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4493372104841804320LL;
unsigned int var_11 = 1815896302U;
unsigned char var_12 = (unsigned char)137;
unsigned short var_18 = (unsigned short)51766;
int zero = 0;
signed char var_20 = (signed char)82;
unsigned short var_21 = (unsigned short)60970;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
