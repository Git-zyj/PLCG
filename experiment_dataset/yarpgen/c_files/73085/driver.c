#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -7332907904183645967LL;
int var_7 = -1543865401;
short var_18 = (short)-31227;
int zero = 0;
short var_19 = (short)-28855;
long long int var_20 = -6843645472851570071LL;
long long int var_21 = 2748118731433932411LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
