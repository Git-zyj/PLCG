#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53537;
long long int var_4 = -9125149457094241965LL;
unsigned long long int var_7 = 7302254025457786663ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)33055;
unsigned short var_13 = (unsigned short)45539;
int var_14 = -1026434636;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
