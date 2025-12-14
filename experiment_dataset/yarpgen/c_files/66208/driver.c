#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14176;
_Bool var_1 = (_Bool)1;
long long int var_2 = 5590326080234885124LL;
short var_3 = (short)20754;
unsigned int var_6 = 1632730826U;
int zero = 0;
unsigned int var_10 = 1592272922U;
long long int var_11 = 7554443726682553944LL;
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
