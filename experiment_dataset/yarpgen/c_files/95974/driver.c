#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-36;
unsigned long long int var_4 = 8630123752232028102ULL;
signed char var_5 = (signed char)-92;
unsigned long long int var_9 = 15844528390608150147ULL;
int zero = 0;
unsigned long long int var_12 = 8513345581122048990ULL;
unsigned long long int var_13 = 16561312261075288489ULL;
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
