#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10583;
short var_1 = (short)15063;
unsigned int var_5 = 2357102223U;
signed char var_6 = (signed char)-85;
long long int var_8 = 8509496551511301301LL;
long long int var_16 = -2333964292810620197LL;
int zero = 0;
unsigned long long int var_17 = 7713443244564035201ULL;
int var_18 = 1542071486;
void init() {
}

void checksum() {
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
