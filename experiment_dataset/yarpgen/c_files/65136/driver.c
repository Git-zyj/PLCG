#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_15 = (signed char)79;
int zero = 0;
unsigned long long int var_19 = 12903286285647240009ULL;
unsigned long long int var_20 = 18316394257699587419ULL;
long long int var_21 = -4068110992627314865LL;
long long int var_22 = 4088233976536177614LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
