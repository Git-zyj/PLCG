#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 18334019606439568099ULL;
int var_5 = 1970667357;
short var_6 = (short)27354;
short var_9 = (short)-29048;
unsigned long long int var_10 = 12589001677693612619ULL;
unsigned long long int var_12 = 7746869373477106196ULL;
unsigned long long int var_16 = 1968713209696157155ULL;
int zero = 0;
short var_17 = (short)13179;
long long int var_18 = -2081198318283265267LL;
long long int var_19 = -436928050788851996LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
