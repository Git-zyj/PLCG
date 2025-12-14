#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)123;
short var_1 = (short)-14465;
short var_2 = (short)-1395;
int var_4 = -961635270;
long long int var_5 = 7529239481650426935LL;
unsigned long long int var_8 = 8619735487399805600ULL;
int zero = 0;
int var_10 = -1804779290;
unsigned long long int var_11 = 4714798986748013988ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
