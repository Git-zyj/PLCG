#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7687369039588798726LL;
unsigned long long int var_8 = 10892368785242934683ULL;
unsigned char var_11 = (unsigned char)54;
int zero = 0;
unsigned char var_17 = (unsigned char)75;
signed char var_18 = (signed char)39;
unsigned long long int var_19 = 11843479619643669789ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
