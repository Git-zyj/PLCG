#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3750062354U;
unsigned int var_7 = 2172019344U;
int var_8 = -1308369446;
unsigned long long int var_10 = 5758899653909617776ULL;
int var_11 = -52343693;
unsigned int var_15 = 3680476366U;
int zero = 0;
int var_20 = 960129185;
unsigned int var_21 = 599550804U;
void init() {
}

void checksum() {
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
