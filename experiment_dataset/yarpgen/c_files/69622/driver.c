#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9045960186941976785LL;
unsigned char var_4 = (unsigned char)218;
int var_5 = 1025244182;
unsigned int var_6 = 359101520U;
signed char var_9 = (signed char)-68;
int zero = 0;
short var_10 = (short)-30599;
unsigned short var_11 = (unsigned short)19632;
short var_12 = (short)18730;
int var_13 = -876866179;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
