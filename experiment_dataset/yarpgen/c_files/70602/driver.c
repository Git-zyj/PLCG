#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7614139995120047068LL;
signed char var_7 = (signed char)-39;
short var_11 = (short)-9049;
int zero = 0;
signed char var_15 = (signed char)-3;
short var_16 = (short)-24272;
signed char var_17 = (signed char)39;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
