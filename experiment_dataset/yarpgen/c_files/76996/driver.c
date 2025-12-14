#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2091310235;
unsigned short var_2 = (unsigned short)56474;
unsigned int var_3 = 721591911U;
unsigned short var_5 = (unsigned short)55527;
unsigned int var_7 = 2292878469U;
unsigned long long int var_8 = 17707082736938572626ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)45338;
unsigned long long int var_13 = 14559336561617062747ULL;
unsigned int var_14 = 2162952739U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
