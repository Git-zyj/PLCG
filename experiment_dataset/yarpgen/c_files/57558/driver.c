#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 232816920079249425LL;
unsigned char var_4 = (unsigned char)15;
unsigned long long int var_5 = 5294649889679316998ULL;
signed char var_8 = (signed char)-30;
long long int var_14 = -4451505498241537037LL;
int zero = 0;
unsigned long long int var_19 = 13422682960177167744ULL;
unsigned char var_20 = (unsigned char)16;
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
