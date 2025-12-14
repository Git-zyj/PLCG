#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2307136833581239655ULL;
unsigned char var_4 = (unsigned char)151;
signed char var_5 = (signed char)43;
unsigned long long int var_7 = 7267780140787034181ULL;
signed char var_9 = (signed char)119;
int zero = 0;
signed char var_15 = (signed char)1;
int var_16 = 424322519;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
