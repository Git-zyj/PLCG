#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-118;
unsigned long long int var_10 = 59699216650896497ULL;
unsigned int var_14 = 1863547644U;
signed char var_15 = (signed char)11;
int zero = 0;
long long int var_18 = 2323662682344401991LL;
signed char var_19 = (signed char)47;
void init() {
}

void checksum() {
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
