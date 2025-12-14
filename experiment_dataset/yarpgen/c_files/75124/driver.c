#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -1864534540;
unsigned int var_13 = 1153120703U;
long long int var_14 = -4725891298382896422LL;
long long int var_17 = 9080114500155589321LL;
int zero = 0;
int var_18 = 108484592;
unsigned long long int var_19 = 3126910461380378132ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
