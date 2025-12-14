#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3828133269U;
unsigned short var_6 = (unsigned short)33132;
unsigned char var_8 = (unsigned char)10;
int var_9 = -1819352245;
int zero = 0;
unsigned long long int var_11 = 12160801423626901124ULL;
int var_12 = 1807309803;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
