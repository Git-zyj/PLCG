#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -259929583;
unsigned long long int var_12 = 15223037358867982363ULL;
int var_15 = -966313683;
int zero = 0;
unsigned short var_17 = (unsigned short)18719;
signed char var_18 = (signed char)-7;
int var_19 = -1186398561;
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
