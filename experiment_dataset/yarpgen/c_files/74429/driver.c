#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 554139194U;
signed char var_14 = (signed char)-20;
int zero = 0;
signed char var_19 = (signed char)-80;
long long int var_20 = -2365786686184489131LL;
unsigned int var_21 = 1078716664U;
unsigned long long int var_22 = 16460968178943198041ULL;
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
