#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3454412256U;
unsigned char var_2 = (unsigned char)58;
signed char var_3 = (signed char)109;
unsigned int var_4 = 3339562383U;
unsigned long long int var_9 = 7978621618277145137ULL;
signed char var_10 = (signed char)9;
unsigned int var_11 = 2897623251U;
int zero = 0;
long long int var_15 = -5165469585524552966LL;
signed char var_16 = (signed char)44;
unsigned short var_17 = (unsigned short)4593;
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
