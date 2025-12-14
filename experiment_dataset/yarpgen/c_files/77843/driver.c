#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28785;
unsigned int var_3 = 3576624344U;
unsigned short var_6 = (unsigned short)10465;
signed char var_10 = (signed char)10;
short var_11 = (short)-28312;
signed char var_12 = (signed char)55;
int zero = 0;
short var_15 = (short)21368;
unsigned int var_16 = 3145128975U;
signed char var_17 = (signed char)71;
unsigned int var_18 = 3517316635U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
