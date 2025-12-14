#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 493955489U;
unsigned long long int var_5 = 13855094992577368118ULL;
int zero = 0;
unsigned long long int var_18 = 3438397151098752698ULL;
unsigned int var_19 = 2535023028U;
int var_20 = -2143247907;
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
