#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 654142293U;
long long int var_6 = -2704461228452917020LL;
long long int var_7 = -605886136144467116LL;
unsigned long long int var_11 = 6441849289984786699ULL;
int zero = 0;
signed char var_14 = (signed char)-99;
int var_15 = 1988479914;
int var_16 = -1114074146;
long long int var_17 = 4621688545446371951LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
