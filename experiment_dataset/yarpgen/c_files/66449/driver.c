#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-16786;
short var_4 = (short)-28246;
unsigned int var_7 = 167439927U;
short var_16 = (short)25759;
unsigned long long int var_17 = 7755118436347224444ULL;
int zero = 0;
long long int var_18 = -8817571329685571472LL;
short var_19 = (short)3063;
unsigned long long int var_20 = 14360863478623356909ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
