#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 942448150;
_Bool var_6 = (_Bool)1;
short var_12 = (short)-2020;
signed char var_13 = (signed char)20;
int zero = 0;
int var_17 = 1250410656;
short var_18 = (short)4399;
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
