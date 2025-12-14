#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8672321164528446344LL;
unsigned char var_4 = (unsigned char)152;
signed char var_10 = (signed char)102;
long long int var_11 = -4073931040088200178LL;
int zero = 0;
unsigned long long int var_14 = 4329464765101823723ULL;
unsigned char var_15 = (unsigned char)63;
void init() {
}

void checksum() {
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
