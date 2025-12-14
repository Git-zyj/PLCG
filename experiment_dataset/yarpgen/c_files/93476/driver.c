#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-7;
signed char var_4 = (signed char)110;
int var_9 = 1276960346;
signed char var_12 = (signed char)-12;
int zero = 0;
signed char var_14 = (signed char)57;
int var_15 = -583200584;
unsigned long long int var_16 = 5738634558487008096ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
