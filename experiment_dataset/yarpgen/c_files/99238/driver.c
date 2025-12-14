#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)14563;
long long int var_4 = 1322583518573553036LL;
short var_5 = (short)13454;
short var_7 = (short)-25290;
unsigned short var_8 = (unsigned short)12149;
long long int var_9 = 336509051698379562LL;
short var_16 = (short)-8066;
int zero = 0;
long long int var_18 = -7055275696086228282LL;
unsigned long long int var_19 = 8011565358135548916ULL;
short var_20 = (short)28277;
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
