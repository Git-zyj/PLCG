#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1383668195;
short var_3 = (short)-1789;
unsigned char var_8 = (unsigned char)4;
long long int var_12 = -959175217889877117LL;
int zero = 0;
short var_15 = (short)5871;
unsigned char var_16 = (unsigned char)102;
void init() {
}

void checksum() {
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
