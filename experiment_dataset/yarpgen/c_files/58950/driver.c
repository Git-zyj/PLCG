#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -4121572103893856242LL;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-107;
int var_10 = 1127459992;
unsigned long long int var_11 = 16478485891533368440ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = 1716285290;
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
