#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -103540230;
unsigned int var_3 = 3034646983U;
unsigned int var_12 = 3862296268U;
int var_14 = 523073571;
unsigned int var_15 = 2415209255U;
int zero = 0;
unsigned int var_17 = 2398024875U;
signed char var_18 = (signed char)-74;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
