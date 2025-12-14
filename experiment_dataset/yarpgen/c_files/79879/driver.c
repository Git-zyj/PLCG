#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1589435539;
unsigned long long int var_7 = 12089754991920784120ULL;
int zero = 0;
unsigned long long int var_11 = 16349534622770258274ULL;
long long int var_12 = 4012550204763324440LL;
unsigned int var_13 = 2354039410U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
