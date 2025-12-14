#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4632051035973161969LL;
unsigned int var_5 = 1796897694U;
long long int var_11 = -5639713746738740980LL;
int zero = 0;
long long int var_14 = 6230102423753333843LL;
unsigned short var_15 = (unsigned short)47422;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
