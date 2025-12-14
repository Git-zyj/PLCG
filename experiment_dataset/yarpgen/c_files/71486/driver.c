#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 9074992095300490264LL;
long long int var_3 = -2960927926641135740LL;
long long int var_5 = -9048748071592210577LL;
long long int var_6 = 2515787155817090189LL;
int zero = 0;
long long int var_10 = 6656551593126782341LL;
long long int var_11 = 4270529275717767666LL;
long long int var_12 = -3296995364601658256LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
