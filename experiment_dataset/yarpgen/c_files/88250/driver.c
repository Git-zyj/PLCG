#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11532280289527832185ULL;
int var_3 = 1681807579;
unsigned char var_4 = (unsigned char)113;
long long int var_6 = 2644371611666923389LL;
unsigned long long int var_8 = 10206620683422089360ULL;
unsigned long long int var_9 = 6444145812360110457ULL;
unsigned int var_17 = 2971512176U;
int zero = 0;
unsigned long long int var_18 = 15729326830465527274ULL;
long long int var_19 = -8958336404447305584LL;
unsigned long long int var_20 = 11943124535594533655ULL;
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
