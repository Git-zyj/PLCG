#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-55;
short var_13 = (short)-31146;
_Bool var_17 = (_Bool)1;
int zero = 0;
short var_18 = (short)20243;
short var_19 = (short)16161;
unsigned char var_20 = (unsigned char)64;
short var_21 = (short)4241;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
