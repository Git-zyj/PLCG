#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3974136269085782746LL;
unsigned long long int var_9 = 3211121394247016247ULL;
short var_10 = (short)-29359;
unsigned long long int var_12 = 995887267565775739ULL;
short var_13 = (short)4798;
short var_17 = (short)16589;
int zero = 0;
unsigned long long int var_20 = 9941149837807399933ULL;
signed char var_21 = (signed char)45;
short var_22 = (short)-20667;
short var_23 = (short)16884;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
