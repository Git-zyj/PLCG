#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6382307562985667725LL;
unsigned int var_3 = 3732069040U;
signed char var_12 = (signed char)76;
int zero = 0;
long long int var_19 = -8821912160599584209LL;
unsigned int var_20 = 813016943U;
signed char var_21 = (signed char)-64;
_Bool var_22 = (_Bool)1;
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
