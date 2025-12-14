#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16887;
unsigned short var_5 = (unsigned short)64887;
int var_7 = 927784827;
short var_9 = (short)-3356;
int var_11 = 839497479;
short var_12 = (short)-17535;
unsigned short var_13 = (unsigned short)14982;
unsigned char var_15 = (unsigned char)224;
short var_16 = (short)10560;
unsigned short var_17 = (unsigned short)13202;
short var_18 = (short)22961;
int zero = 0;
int var_20 = -418553191;
unsigned short var_21 = (unsigned short)14064;
void init() {
}

void checksum() {
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
