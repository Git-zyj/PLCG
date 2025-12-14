#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8517169251967753993LL;
long long int var_1 = 3949780678410847480LL;
long long int var_6 = 229960460649911234LL;
long long int var_9 = -2290707805486872686LL;
long long int var_10 = -1151826254398691021LL;
int zero = 0;
long long int var_11 = -8402739703885919384LL;
long long int var_12 = -4728434787154038874LL;
long long int var_13 = 6236389897216853075LL;
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
