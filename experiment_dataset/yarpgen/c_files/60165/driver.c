#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)63507;
short var_2 = (short)-31769;
signed char var_7 = (signed char)3;
signed char var_8 = (signed char)-101;
int zero = 0;
unsigned long long int var_13 = 18341772259027705670ULL;
signed char var_14 = (signed char)113;
long long int var_15 = 3982791804378216638LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
