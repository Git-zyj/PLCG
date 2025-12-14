#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3886284861206985709LL;
short var_4 = (short)11201;
unsigned char var_5 = (unsigned char)58;
signed char var_6 = (signed char)-97;
unsigned int var_8 = 2734755601U;
signed char var_11 = (signed char)93;
short var_12 = (short)-8717;
unsigned int var_14 = 2948842432U;
int zero = 0;
short var_15 = (short)13836;
short var_16 = (short)25104;
unsigned int var_17 = 824648068U;
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
