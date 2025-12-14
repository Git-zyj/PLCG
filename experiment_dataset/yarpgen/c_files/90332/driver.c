#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)48;
int var_4 = -964020855;
unsigned short var_6 = (unsigned short)5429;
short var_7 = (short)-26409;
unsigned short var_8 = (unsigned short)14384;
unsigned int var_9 = 842918882U;
short var_15 = (short)-18012;
signed char var_16 = (signed char)62;
int zero = 0;
signed char var_19 = (signed char)-97;
int var_20 = -611188605;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
