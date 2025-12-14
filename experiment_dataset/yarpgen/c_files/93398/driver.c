#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)31611;
unsigned int var_7 = 958703641U;
int zero = 0;
unsigned long long int var_18 = 4904821267892156834ULL;
signed char var_19 = (signed char)-84;
unsigned long long int var_20 = 13682024650395669227ULL;
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
