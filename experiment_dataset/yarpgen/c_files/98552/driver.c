#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3688699760789582335LL;
unsigned char var_1 = (unsigned char)179;
long long int var_4 = 5388938358633612331LL;
unsigned char var_5 = (unsigned char)147;
unsigned char var_7 = (unsigned char)187;
unsigned long long int var_8 = 5813093279817522633ULL;
int zero = 0;
unsigned long long int var_10 = 9523992402858957380ULL;
unsigned long long int var_11 = 12243909057223822379ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
