#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -233684946;
int var_3 = -1653244328;
unsigned short var_7 = (unsigned short)27877;
signed char var_11 = (signed char)-76;
int var_12 = -1617140171;
int var_13 = -1497343279;
int zero = 0;
short var_14 = (short)20721;
unsigned long long int var_15 = 6284600764372166848ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
