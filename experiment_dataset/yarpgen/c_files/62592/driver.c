#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1141628546;
unsigned char var_10 = (unsigned char)58;
unsigned long long int var_14 = 14230565950964215766ULL;
int zero = 0;
signed char var_17 = (signed char)85;
unsigned int var_18 = 841455551U;
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
