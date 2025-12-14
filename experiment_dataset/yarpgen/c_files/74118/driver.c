#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5154701146818994211LL;
unsigned long long int var_1 = 6097127723371180848ULL;
short var_6 = (short)31526;
long long int var_7 = -7200084284869119576LL;
unsigned long long int var_9 = 17481914422544723673ULL;
long long int var_10 = -3445250888237191138LL;
long long int var_13 = 7650746287260870532LL;
short var_17 = (short)-21508;
unsigned int var_18 = 2640521860U;
short var_19 = (short)-16086;
int zero = 0;
unsigned long long int var_20 = 536357611200864861ULL;
long long int var_21 = -8839580752591246086LL;
long long int var_22 = 6926805994226420745LL;
void init() {
}

void checksum() {
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
