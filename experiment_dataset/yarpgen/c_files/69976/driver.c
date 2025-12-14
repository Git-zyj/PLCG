#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-991;
signed char var_8 = (signed char)7;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)-82;
int var_15 = -436822253;
int zero = 0;
short var_17 = (short)25147;
int var_18 = -1157364870;
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
