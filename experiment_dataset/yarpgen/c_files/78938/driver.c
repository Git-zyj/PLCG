#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 933042332U;
unsigned char var_3 = (unsigned char)105;
short var_8 = (short)23301;
unsigned short var_9 = (unsigned short)31902;
short var_11 = (short)-19552;
int zero = 0;
unsigned char var_13 = (unsigned char)28;
unsigned int var_14 = 1078198595U;
unsigned long long int var_15 = 8104317786346022435ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
