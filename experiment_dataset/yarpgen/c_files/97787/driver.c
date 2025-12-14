#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1416850851;
unsigned short var_3 = (unsigned short)41491;
short var_8 = (short)27933;
int zero = 0;
unsigned long long int var_14 = 183919052930288893ULL;
short var_15 = (short)23243;
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
