#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-4441;
short var_2 = (short)-3104;
unsigned short var_5 = (unsigned short)17287;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_14 = (short)-3898;
signed char var_15 = (signed char)-7;
void init() {
}

void checksum() {
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
