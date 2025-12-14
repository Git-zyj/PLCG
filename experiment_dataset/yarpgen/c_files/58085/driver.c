#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-2564;
signed char var_11 = (signed char)112;
unsigned int var_14 = 3196783078U;
int zero = 0;
unsigned long long int var_19 = 17596641234543434114ULL;
int var_20 = -538016413;
long long int var_21 = 3684840617536666315LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
