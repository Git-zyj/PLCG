#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13248;
signed char var_2 = (signed char)-48;
signed char var_7 = (signed char)52;
unsigned int var_9 = 1615355116U;
int zero = 0;
unsigned long long int var_10 = 4803252222537325818ULL;
int var_11 = 1214445753;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
