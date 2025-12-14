#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10653892659013366013ULL;
long long int var_6 = 6893419501223463191LL;
long long int var_9 = -4732967056232763605LL;
unsigned char var_13 = (unsigned char)43;
signed char var_15 = (signed char)24;
int zero = 0;
signed char var_18 = (signed char)-79;
unsigned long long int var_19 = 1443994110459372715ULL;
unsigned long long int var_20 = 9858239683884381678ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
