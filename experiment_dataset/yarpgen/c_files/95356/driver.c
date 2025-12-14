#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3113699242U;
int var_1 = 97479390;
int var_3 = -2129495225;
long long int var_5 = -3392174545899885780LL;
unsigned int var_6 = 3318632885U;
short var_7 = (short)9003;
long long int var_8 = 3193449480784128862LL;
long long int var_13 = -4771814888071571790LL;
int zero = 0;
long long int var_16 = -6486164865195971957LL;
int var_17 = 705480089;
int var_18 = 1729841661;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
