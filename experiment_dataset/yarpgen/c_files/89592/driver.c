#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 242006011;
unsigned short var_5 = (unsigned short)49860;
unsigned short var_6 = (unsigned short)59631;
unsigned long long int var_8 = 13391453841625344745ULL;
int zero = 0;
long long int var_10 = 3734972433239146587LL;
unsigned short var_11 = (unsigned short)43397;
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
