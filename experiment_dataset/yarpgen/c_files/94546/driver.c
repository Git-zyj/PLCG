#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30684;
unsigned short var_1 = (unsigned short)189;
short var_3 = (short)31572;
long long int var_9 = -5483582985117821701LL;
int zero = 0;
unsigned long long int var_15 = 2025501811624748003ULL;
int var_16 = 2143874774;
unsigned long long int var_17 = 16453581939146441392ULL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
