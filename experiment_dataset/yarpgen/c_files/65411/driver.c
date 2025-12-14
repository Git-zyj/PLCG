#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5091163994951079467LL;
unsigned short var_5 = (unsigned short)22506;
unsigned short var_7 = (unsigned short)64732;
short var_8 = (short)4714;
signed char var_10 = (signed char)-70;
int zero = 0;
long long int var_12 = -7129565844457481284LL;
unsigned int var_13 = 660783799U;
unsigned short var_14 = (unsigned short)10584;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
