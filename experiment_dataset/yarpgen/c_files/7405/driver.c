#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-1716;
short var_4 = (short)-5741;
short var_11 = (short)8186;
long long int var_13 = -5068633360926411278LL;
int zero = 0;
short var_14 = (short)15062;
unsigned long long int var_15 = 15144419200526091065ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
