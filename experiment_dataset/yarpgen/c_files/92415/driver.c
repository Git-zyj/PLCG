#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3796236546423319581LL;
short var_5 = (short)-8657;
short var_6 = (short)-31659;
short var_8 = (short)-11178;
long long int var_9 = -7356909362386415067LL;
long long int var_14 = -9053462864783152532LL;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
long long int var_20 = -5655344655982961673LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
