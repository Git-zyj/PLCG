#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5815238480641372246LL;
unsigned long long int var_3 = 16101348260128469510ULL;
int var_10 = -1182883541;
int zero = 0;
signed char var_11 = (signed char)-23;
int var_12 = -1814263061;
signed char var_13 = (signed char)69;
long long int var_14 = 1640679104758416422LL;
void init() {
}

void checksum() {
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
