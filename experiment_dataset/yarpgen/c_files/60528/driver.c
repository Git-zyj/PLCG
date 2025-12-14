#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 984460617;
int var_5 = -1009709976;
short var_10 = (short)18567;
int zero = 0;
signed char var_12 = (signed char)37;
unsigned short var_13 = (unsigned short)35305;
int var_14 = -1179328361;
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
