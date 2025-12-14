#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)65461;
short var_5 = (short)4557;
short var_15 = (short)6419;
unsigned long long int var_17 = 16862736563931019458ULL;
int zero = 0;
int var_18 = -987202161;
int var_19 = -103601151;
unsigned long long int var_20 = 1821907989837739317ULL;
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
