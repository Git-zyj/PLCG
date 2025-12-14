#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1803925274;
unsigned short var_2 = (unsigned short)27959;
short var_5 = (short)-12545;
short var_6 = (short)9373;
long long int var_8 = 6841857980501472193LL;
unsigned long long int var_9 = 13064837185260958295ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3073883798U;
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
