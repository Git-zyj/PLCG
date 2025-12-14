#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1181858645;
unsigned long long int var_8 = 12984438370268722951ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)35543;
unsigned short var_14 = (unsigned short)26922;
unsigned short var_15 = (unsigned short)56148;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
