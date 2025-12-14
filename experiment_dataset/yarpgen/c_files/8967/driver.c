#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-79;
short var_4 = (short)7331;
short var_5 = (short)-8693;
short var_8 = (short)2841;
signed char var_11 = (signed char)38;
int zero = 0;
signed char var_12 = (signed char)-101;
long long int var_13 = 6720031663997952599LL;
_Bool var_14 = (_Bool)0;
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
