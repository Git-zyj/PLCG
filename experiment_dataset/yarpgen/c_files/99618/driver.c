#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6679254950762189646LL;
long long int var_7 = -1192695245058340693LL;
int zero = 0;
long long int var_15 = 590112850589583454LL;
signed char var_16 = (signed char)-59;
long long int var_17 = -5064621975321437853LL;
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
