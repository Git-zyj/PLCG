#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7376907371155324860LL;
short var_3 = (short)-29506;
int var_4 = 462844802;
short var_5 = (short)21245;
long long int var_9 = 324188061028750397LL;
int var_10 = -954232890;
_Bool var_11 = (_Bool)1;
short var_14 = (short)-26950;
int zero = 0;
unsigned int var_16 = 2501366252U;
short var_17 = (short)27114;
void init() {
}

void checksum() {
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
