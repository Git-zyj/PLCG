#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)124;
unsigned long long int var_4 = 12091498342509520036ULL;
signed char var_8 = (signed char)38;
signed char var_11 = (signed char)-9;
int zero = 0;
signed char var_12 = (signed char)-115;
unsigned short var_13 = (unsigned short)37793;
signed char var_14 = (signed char)-87;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
