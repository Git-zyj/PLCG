#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 439715267;
unsigned short var_3 = (unsigned short)15240;
int var_8 = -2076916414;
short var_9 = (short)22380;
short var_10 = (short)152;
signed char var_13 = (signed char)114;
int zero = 0;
short var_17 = (short)-19443;
unsigned char var_18 = (unsigned char)55;
unsigned char var_19 = (unsigned char)231;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
