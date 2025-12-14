#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 18050915809485886569ULL;
short var_4 = (short)-12033;
short var_9 = (short)-25102;
int zero = 0;
int var_11 = -1235821806;
long long int var_12 = 2536964737535622193LL;
long long int var_13 = 2699255178386755102LL;
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
