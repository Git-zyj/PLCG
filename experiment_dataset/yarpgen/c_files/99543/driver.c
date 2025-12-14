#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-8;
short var_1 = (short)-25356;
short var_4 = (short)2619;
unsigned long long int var_6 = 16010893721714382149ULL;
signed char var_8 = (signed char)-93;
short var_9 = (short)-795;
unsigned long long int var_11 = 7994128334410670651ULL;
int zero = 0;
signed char var_14 = (signed char)-76;
unsigned long long int var_15 = 8920061678000224391ULL;
int var_16 = 1671449836;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
