#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)51;
unsigned int var_5 = 1219496646U;
short var_14 = (short)14090;
unsigned char var_15 = (unsigned char)143;
int zero = 0;
signed char var_17 = (signed char)-42;
short var_18 = (short)-18648;
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
