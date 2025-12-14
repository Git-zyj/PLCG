#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3836389683U;
int var_1 = -1586521101;
unsigned long long int var_2 = 11153480993533266600ULL;
long long int var_5 = -6501726045173912258LL;
unsigned int var_7 = 3343570165U;
unsigned short var_8 = (unsigned short)15167;
unsigned long long int var_9 = 14979222721052287007ULL;
short var_13 = (short)-15691;
int zero = 0;
signed char var_14 = (signed char)68;
signed char var_15 = (signed char)55;
unsigned short var_16 = (unsigned short)51644;
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
