#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)117;
short var_5 = (short)1049;
unsigned char var_7 = (unsigned char)139;
short var_8 = (short)20476;
short var_9 = (short)-5663;
short var_11 = (short)6473;
unsigned char var_12 = (unsigned char)233;
short var_14 = (short)-6841;
short var_16 = (short)-15124;
unsigned char var_17 = (unsigned char)54;
int zero = 0;
short var_18 = (short)26520;
short var_19 = (short)31239;
short var_20 = (short)-20639;
unsigned char var_21 = (unsigned char)236;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
