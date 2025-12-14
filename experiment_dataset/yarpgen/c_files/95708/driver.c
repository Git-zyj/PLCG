#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1086320280;
int var_3 = 414294076;
signed char var_4 = (signed char)-7;
unsigned long long int var_7 = 14319869621018897159ULL;
int zero = 0;
unsigned long long int var_10 = 4270785815065518355ULL;
unsigned long long int var_11 = 14613805050354868513ULL;
long long int var_12 = -3645092786381238022LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
