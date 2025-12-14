#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-4;
long long int var_8 = -6652050365708842233LL;
int zero = 0;
short var_10 = (short)20430;
long long int var_11 = 1079072954783000441LL;
signed char var_12 = (signed char)123;
short var_13 = (short)-16191;
short var_14 = (short)4109;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
