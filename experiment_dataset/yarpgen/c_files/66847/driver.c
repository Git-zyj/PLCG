#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5425202001757440781LL;
_Bool var_4 = (_Bool)0;
unsigned int var_8 = 1765555550U;
int zero = 0;
short var_11 = (short)-17868;
unsigned short var_12 = (unsigned short)7303;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
