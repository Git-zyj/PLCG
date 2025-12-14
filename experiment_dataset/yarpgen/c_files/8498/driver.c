#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 341942990;
short var_11 = (short)5136;
int var_12 = -237881204;
signed char var_13 = (signed char)-114;
signed char var_14 = (signed char)45;
unsigned int var_17 = 2239752709U;
int zero = 0;
unsigned int var_19 = 1402700770U;
long long int var_20 = 915031330665772964LL;
unsigned char var_21 = (unsigned char)74;
int var_22 = -933182760;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
