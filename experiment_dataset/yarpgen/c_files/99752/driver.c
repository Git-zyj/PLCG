#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_6 = (short)-25297;
unsigned long long int var_8 = 7128064600765681974ULL;
signed char var_10 = (signed char)40;
short var_11 = (short)7055;
signed char var_19 = (signed char)(-127 - 1);
int zero = 0;
short var_20 = (short)-11727;
short var_21 = (short)-13486;
short var_22 = (short)-10096;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
