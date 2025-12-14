#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)30784;
signed char var_5 = (signed char)24;
int var_18 = -2073115586;
int zero = 0;
short var_19 = (short)9221;
unsigned long long int var_20 = 7289793184054940357ULL;
unsigned long long int var_21 = 4019717455236025129ULL;
int var_22 = -1802129532;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
