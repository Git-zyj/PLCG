#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3869974439U;
signed char var_5 = (signed char)-74;
signed char var_10 = (signed char)-80;
short var_11 = (short)-15865;
int zero = 0;
int var_14 = -1465708381;
signed char var_15 = (signed char)48;
unsigned char var_16 = (unsigned char)138;
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
