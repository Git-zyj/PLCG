#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37071;
unsigned char var_13 = (unsigned char)154;
unsigned int var_16 = 3922721380U;
int zero = 0;
unsigned long long int var_19 = 4597240234911977128ULL;
unsigned long long int var_20 = 5694986412319900560ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
