#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)7;
unsigned long long int var_9 = 1029867896947953448ULL;
int zero = 0;
long long int var_10 = 1853507847335555542LL;
short var_11 = (short)7659;
unsigned short var_12 = (unsigned short)53778;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
