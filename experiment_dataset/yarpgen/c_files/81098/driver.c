#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6092574025031926207ULL;
signed char var_4 = (signed char)-2;
unsigned long long int var_14 = 11129578783562313431ULL;
int zero = 0;
signed char var_17 = (signed char)-14;
long long int var_18 = 3458786525245743460LL;
short var_19 = (short)10910;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
