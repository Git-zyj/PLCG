#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)57749;
long long int var_10 = -2264970204356375180LL;
int var_12 = -742761614;
signed char var_13 = (signed char)58;
int var_14 = -1366413813;
int zero = 0;
signed char var_15 = (signed char)64;
long long int var_16 = -26902993400362520LL;
unsigned long long int var_17 = 17278813338015510499ULL;
unsigned short var_18 = (unsigned short)32167;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
