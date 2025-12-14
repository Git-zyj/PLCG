#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)24353;
unsigned char var_5 = (unsigned char)179;
signed char var_7 = (signed char)104;
unsigned short var_10 = (unsigned short)33203;
int zero = 0;
long long int var_14 = -4738692608200749931LL;
int var_15 = 970880120;
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
