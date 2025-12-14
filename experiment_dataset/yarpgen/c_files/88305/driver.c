#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-807;
unsigned short var_3 = (unsigned short)4584;
signed char var_5 = (signed char)-29;
int zero = 0;
unsigned long long int var_11 = 4935071689619973694ULL;
int var_12 = 1438811217;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
