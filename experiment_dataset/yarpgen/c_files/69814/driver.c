#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2450359286U;
unsigned int var_4 = 2499184470U;
unsigned long long int var_8 = 6950721016462078884ULL;
signed char var_14 = (signed char)-38;
unsigned int var_15 = 3301925970U;
unsigned long long int var_17 = 3590637490828604481ULL;
int zero = 0;
unsigned int var_19 = 1840799183U;
signed char var_20 = (signed char)-85;
void init() {
}

void checksum() {
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
