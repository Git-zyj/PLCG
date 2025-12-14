#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2206656705U;
short var_4 = (short)-2317;
unsigned long long int var_5 = 8195021243674669862ULL;
long long int var_10 = 8815711296709578707LL;
signed char var_12 = (signed char)26;
int zero = 0;
unsigned int var_15 = 3528017766U;
long long int var_16 = 7806901230270622414LL;
unsigned int var_17 = 950386458U;
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
