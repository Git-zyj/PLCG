#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)26;
short var_5 = (short)-8027;
short var_6 = (short)-28858;
signed char var_8 = (signed char)17;
short var_12 = (short)-26133;
int zero = 0;
unsigned char var_17 = (unsigned char)29;
int var_18 = 28667536;
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
