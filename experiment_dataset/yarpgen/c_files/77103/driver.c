#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -1061192561976861690LL;
unsigned int var_7 = 1369824218U;
unsigned int var_10 = 2711909156U;
int zero = 0;
int var_11 = 245924586;
int var_12 = 1277526376;
signed char var_13 = (signed char)-123;
unsigned int var_14 = 94950834U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
