#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2870067939U;
unsigned long long int var_4 = 7838060346544817671ULL;
signed char var_7 = (signed char)-78;
int zero = 0;
unsigned short var_12 = (unsigned short)7405;
unsigned int var_13 = 65028438U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
