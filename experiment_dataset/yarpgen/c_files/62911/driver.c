#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)13254;
short var_5 = (short)-13711;
short var_7 = (short)16494;
unsigned short var_11 = (unsigned short)57042;
short var_12 = (short)6959;
unsigned short var_13 = (unsigned short)9367;
int zero = 0;
short var_14 = (short)7412;
unsigned short var_15 = (unsigned short)11397;
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
