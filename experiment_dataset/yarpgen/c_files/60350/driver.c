#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)9916;
short var_7 = (short)-17522;
short var_8 = (short)32069;
short var_10 = (short)28082;
int var_11 = -820222738;
unsigned short var_12 = (unsigned short)32346;
int zero = 0;
short var_15 = (short)-21605;
unsigned short var_16 = (unsigned short)39856;
unsigned int var_17 = 1975749633U;
unsigned short var_18 = (unsigned short)38575;
signed char var_19 = (signed char)39;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
