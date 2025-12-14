#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)26013;
unsigned int var_3 = 4188083129U;
unsigned int var_6 = 1834197523U;
short var_9 = (short)-23951;
short var_10 = (short)12126;
int zero = 0;
short var_11 = (short)30677;
unsigned short var_12 = (unsigned short)20453;
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
