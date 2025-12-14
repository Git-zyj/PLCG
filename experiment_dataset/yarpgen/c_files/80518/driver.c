#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7590051312843023970ULL;
int var_7 = 2138565888;
unsigned long long int var_9 = 11945191581658454995ULL;
int zero = 0;
unsigned long long int var_20 = 9416667857929555693ULL;
unsigned long long int var_21 = 4148771468210118962ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
