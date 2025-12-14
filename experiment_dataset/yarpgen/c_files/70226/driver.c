#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)34154;
unsigned long long int var_5 = 4118279020369963235ULL;
unsigned short var_7 = (unsigned short)24938;
int zero = 0;
short var_14 = (short)15734;
unsigned char var_15 = (unsigned char)93;
long long int var_16 = 1005035586398037100LL;
unsigned long long int var_17 = 1556739885635324994ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
