#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -25927265501582178LL;
unsigned char var_1 = (unsigned char)30;
long long int var_2 = -694613871904923512LL;
unsigned int var_4 = 2691736386U;
_Bool var_6 = (_Bool)1;
int var_7 = -1547421922;
unsigned int var_11 = 2262249699U;
int zero = 0;
long long int var_13 = 624898929065953226LL;
short var_14 = (short)-30341;
int var_15 = 1337036936;
unsigned long long int var_16 = 3700764447244302553ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
