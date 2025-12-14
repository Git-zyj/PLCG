#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1516487436;
signed char var_6 = (signed char)11;
unsigned int var_7 = 1030500422U;
short var_10 = (short)-21979;
int zero = 0;
unsigned long long int var_15 = 11179004413203560271ULL;
signed char var_16 = (signed char)-76;
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
