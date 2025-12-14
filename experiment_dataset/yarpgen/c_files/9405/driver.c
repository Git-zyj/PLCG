#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2253066454020315509ULL;
short var_4 = (short)17273;
_Bool var_6 = (_Bool)0;
long long int var_7 = 3081279412642561164LL;
long long int var_9 = -7877630658748616432LL;
unsigned char var_10 = (unsigned char)163;
short var_11 = (short)-32678;
int zero = 0;
unsigned char var_12 = (unsigned char)18;
long long int var_13 = -1452618763488524198LL;
short var_14 = (short)13759;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
