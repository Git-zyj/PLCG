#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9893475630771891939ULL;
int var_4 = 271520727;
short var_5 = (short)-11246;
short var_9 = (short)-21716;
int zero = 0;
short var_11 = (short)27857;
long long int var_12 = -3928084875703220783LL;
unsigned long long int var_13 = 11984044039095674097ULL;
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
