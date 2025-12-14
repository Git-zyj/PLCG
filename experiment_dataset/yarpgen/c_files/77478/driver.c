#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)55655;
int var_8 = 689668179;
unsigned short var_9 = (unsigned short)62382;
short var_11 = (short)29850;
int zero = 0;
signed char var_12 = (signed char)-12;
long long int var_13 = 5396217082246736711LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
