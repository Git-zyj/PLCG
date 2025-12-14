#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = 1979722573;
signed char var_14 = (signed char)26;
unsigned long long int var_15 = 7944426512998437132ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)60485;
int var_19 = 1016343490;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
