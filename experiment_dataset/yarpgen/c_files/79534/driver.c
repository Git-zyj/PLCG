#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2419;
long long int var_5 = 3956635307844209592LL;
unsigned long long int var_6 = 17790120426369825395ULL;
int zero = 0;
long long int var_13 = 1270638682336181898LL;
unsigned int var_14 = 1819912964U;
void init() {
}

void checksum() {
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
