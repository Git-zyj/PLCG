#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1444094534;
short var_7 = (short)-12858;
unsigned int var_15 = 1039540544U;
int zero = 0;
long long int var_16 = -6845428945865730689LL;
signed char var_17 = (signed char)82;
short var_18 = (short)30954;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
