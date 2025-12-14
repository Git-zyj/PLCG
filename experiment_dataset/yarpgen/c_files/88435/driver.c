#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37665;
short var_1 = (short)19638;
unsigned short var_7 = (unsigned short)41608;
unsigned short var_8 = (unsigned short)65483;
int zero = 0;
unsigned int var_14 = 3697968157U;
unsigned long long int var_15 = 16073024823371051789ULL;
unsigned short var_16 = (unsigned short)6632;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
