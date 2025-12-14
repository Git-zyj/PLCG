#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)61691;
unsigned short var_9 = (unsigned short)39199;
_Bool var_10 = (_Bool)0;
short var_11 = (short)-16218;
unsigned long long int var_12 = 12691976533136674623ULL;
short var_13 = (short)29685;
short var_17 = (short)10404;
int zero = 0;
unsigned long long int var_20 = 16276790308460656082ULL;
unsigned long long int var_21 = 3621115849027289378ULL;
int var_22 = -497722681;
void init() {
}

void checksum() {
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
