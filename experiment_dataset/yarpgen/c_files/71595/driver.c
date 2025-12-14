#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)38;
short var_1 = (short)4922;
unsigned int var_2 = 4186651334U;
short var_3 = (short)-14823;
unsigned int var_4 = 3238267916U;
unsigned char var_5 = (unsigned char)18;
unsigned int var_6 = 3424987432U;
unsigned char var_7 = (unsigned char)42;
short var_8 = (short)30136;
unsigned char var_9 = (unsigned char)155;
unsigned short var_10 = (unsigned short)57187;
short var_11 = (short)9071;
unsigned int var_12 = 2283373789U;
signed char var_13 = (signed char)18;
signed char var_14 = (signed char)82;
unsigned short var_15 = (unsigned short)25360;
unsigned char var_16 = (unsigned char)6;
int zero = 0;
short var_17 = (short)-23758;
short var_18 = (short)21724;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
