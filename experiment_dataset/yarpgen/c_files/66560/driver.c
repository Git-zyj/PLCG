#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4682;
signed char var_2 = (signed char)10;
unsigned char var_4 = (unsigned char)185;
int var_5 = -1328396149;
unsigned char var_6 = (unsigned char)207;
signed char var_9 = (signed char)100;
int var_11 = -514581418;
int zero = 0;
signed char var_12 = (signed char)78;
short var_13 = (short)-6865;
unsigned char var_14 = (unsigned char)201;
short var_15 = (short)5861;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
