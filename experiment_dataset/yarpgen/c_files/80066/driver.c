#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1886981469;
int var_5 = -307748931;
short var_11 = (short)16740;
int var_13 = -2066617846;
int zero = 0;
unsigned char var_14 = (unsigned char)47;
short var_15 = (short)8797;
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
