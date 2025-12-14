#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-88;
short var_8 = (short)1667;
unsigned int var_10 = 28798108U;
short var_11 = (short)-19961;
int zero = 0;
unsigned int var_17 = 3340784705U;
signed char var_18 = (signed char)15;
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
