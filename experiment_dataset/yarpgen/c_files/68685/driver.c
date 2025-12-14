#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1525573455;
unsigned char var_2 = (unsigned char)124;
long long int var_4 = -7024380634568916995LL;
long long int var_10 = 8528514074449395560LL;
int zero = 0;
short var_11 = (short)-3299;
long long int var_12 = -2477384435658708595LL;
void init() {
}

void checksum() {
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
