#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -870838368;
int var_2 = -1625996241;
int var_8 = -830833120;
int var_9 = -1303750651;
int zero = 0;
signed char var_20 = (signed char)-23;
unsigned short var_21 = (unsigned short)54405;
long long int var_22 = 848346748678249850LL;
long long int var_23 = 1366460730696049378LL;
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
