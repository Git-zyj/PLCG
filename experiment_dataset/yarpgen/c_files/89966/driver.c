#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3812439547U;
unsigned char var_6 = (unsigned char)43;
long long int var_9 = 1708726988408609087LL;
unsigned char var_13 = (unsigned char)168;
int zero = 0;
unsigned short var_16 = (unsigned short)40635;
unsigned long long int var_17 = 11035031734197393886ULL;
unsigned long long int var_18 = 11335213676740898276ULL;
void init() {
}

void checksum() {
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
