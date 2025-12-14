#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2385214567875396174LL;
unsigned long long int var_6 = 1588554897724359499ULL;
int var_7 = -768862256;
unsigned char var_9 = (unsigned char)57;
short var_10 = (short)-22204;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = 1089925281;
unsigned char var_14 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
