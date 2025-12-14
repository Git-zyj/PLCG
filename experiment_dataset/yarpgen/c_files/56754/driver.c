#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1211360815;
unsigned long long int var_5 = 11921157050684998320ULL;
unsigned long long int var_10 = 4645935409772361438ULL;
int zero = 0;
long long int var_13 = 5693954824503838844LL;
long long int var_14 = 1268411437420811451LL;
void init() {
}

void checksum() {
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
