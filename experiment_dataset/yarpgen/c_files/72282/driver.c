#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7325957430249713565LL;
int var_7 = -251825085;
int zero = 0;
unsigned char var_15 = (unsigned char)184;
long long int var_16 = 557774518600913582LL;
unsigned short var_17 = (unsigned short)54885;
void init() {
}

void checksum() {
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
