#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-82;
signed char var_3 = (signed char)78;
unsigned short var_4 = (unsigned short)63379;
signed char var_5 = (signed char)33;
signed char var_7 = (signed char)26;
unsigned short var_9 = (unsigned short)9187;
unsigned short var_10 = (unsigned short)38194;
int zero = 0;
unsigned short var_15 = (unsigned short)9533;
signed char var_16 = (signed char)90;
long long int var_17 = -6980264496364430006LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
