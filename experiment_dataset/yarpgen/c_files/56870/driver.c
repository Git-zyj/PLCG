#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2038366949;
long long int var_1 = 8972199540290554665LL;
unsigned short var_8 = (unsigned short)15064;
int zero = 0;
long long int var_17 = -8709775718258858310LL;
unsigned short var_18 = (unsigned short)51213;
void init() {
}

void checksum() {
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
