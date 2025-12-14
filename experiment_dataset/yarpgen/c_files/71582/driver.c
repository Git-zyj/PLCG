#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15371716670620700326ULL;
int var_7 = 117384638;
int var_10 = -95851064;
short var_14 = (short)-15004;
int zero = 0;
int var_16 = 885654869;
unsigned char var_17 = (unsigned char)244;
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
