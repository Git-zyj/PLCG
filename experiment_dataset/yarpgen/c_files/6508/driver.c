#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 835710020U;
int var_6 = 1764103673;
signed char var_7 = (signed char)-96;
long long int var_8 = 8933596915714798911LL;
unsigned short var_17 = (unsigned short)2179;
int zero = 0;
unsigned int var_20 = 2483472312U;
int var_21 = 1345473504;
int var_22 = -559663139;
unsigned int var_23 = 3186578268U;
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
