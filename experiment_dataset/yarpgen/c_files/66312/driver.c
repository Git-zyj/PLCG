#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7786158444292673363LL;
int var_5 = 1867156660;
_Bool var_7 = (_Bool)0;
long long int var_9 = -4014068721555484366LL;
unsigned long long int var_10 = 7253455670826398127ULL;
unsigned long long int var_12 = 16348942933141401337ULL;
int zero = 0;
long long int var_15 = -8095732617419830117LL;
signed char var_16 = (signed char)-112;
void init() {
}

void checksum() {
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
