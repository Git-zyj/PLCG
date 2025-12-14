#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1145026739;
_Bool var_5 = (_Bool)0;
_Bool var_7 = (_Bool)0;
int var_19 = -1536198260;
int zero = 0;
int var_20 = -1697469846;
int var_21 = -898267321;
int var_22 = -1193819631;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
