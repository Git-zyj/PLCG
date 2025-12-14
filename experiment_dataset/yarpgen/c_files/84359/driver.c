#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3146966096U;
signed char var_2 = (signed char)44;
int var_3 = -2068926282;
unsigned long long int var_5 = 13549920050606451365ULL;
signed char var_9 = (signed char)69;
signed char var_10 = (signed char)54;
int zero = 0;
unsigned int var_11 = 4292187070U;
int var_12 = -1689334612;
signed char var_13 = (signed char)67;
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
