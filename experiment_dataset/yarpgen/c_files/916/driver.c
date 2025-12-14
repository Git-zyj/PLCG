#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)85;
signed char var_9 = (signed char)61;
unsigned long long int var_10 = 10462658852998306549ULL;
signed char var_13 = (signed char)31;
signed char var_16 = (signed char)-67;
int zero = 0;
signed char var_19 = (signed char)12;
unsigned long long int var_20 = 13686112466188396540ULL;
signed char var_21 = (signed char)83;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
