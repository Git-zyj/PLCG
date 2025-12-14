#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-1625;
unsigned short var_7 = (unsigned short)53188;
unsigned short var_11 = (unsigned short)25747;
short var_12 = (short)-19266;
int zero = 0;
short var_15 = (short)18999;
unsigned short var_16 = (unsigned short)49039;
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
