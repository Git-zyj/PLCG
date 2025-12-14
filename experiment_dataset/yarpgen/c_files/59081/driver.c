#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-56;
signed char var_5 = (signed char)-48;
int var_7 = 2128771574;
signed char var_8 = (signed char)6;
int var_9 = -675253704;
int var_11 = 1302112209;
int zero = 0;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-15;
signed char var_14 = (signed char)-41;
short var_15 = (short)-2789;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
