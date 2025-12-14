#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)61;
unsigned int var_16 = 2957061250U;
unsigned long long int var_19 = 14935854995424637488ULL;
int zero = 0;
long long int var_20 = -7354741346150720279LL;
unsigned short var_21 = (unsigned short)48766;
unsigned long long int var_22 = 8922975101120331218ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
