#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1822294011;
unsigned char var_1 = (unsigned char)188;
long long int var_5 = -5892070019011491325LL;
short var_13 = (short)6989;
int zero = 0;
int var_18 = 555896795;
signed char var_19 = (signed char)115;
void init() {
}

void checksum() {
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
