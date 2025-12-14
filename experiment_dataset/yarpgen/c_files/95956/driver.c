#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1104664308535668738LL;
signed char var_2 = (signed char)69;
signed char var_5 = (signed char)79;
signed char var_16 = (signed char)-41;
long long int var_17 = 8420454996845023923LL;
int zero = 0;
int var_18 = -473381150;
unsigned long long int var_19 = 7238799243921882759ULL;
unsigned long long int var_20 = 14014274355695105937ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
