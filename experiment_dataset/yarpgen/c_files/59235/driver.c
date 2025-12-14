#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3489096062U;
unsigned char var_2 = (unsigned char)97;
unsigned int var_6 = 1645259922U;
unsigned short var_7 = (unsigned short)13612;
unsigned char var_9 = (unsigned char)68;
int zero = 0;
short var_15 = (short)8993;
short var_16 = (short)-6587;
unsigned short var_17 = (unsigned short)44166;
unsigned int var_18 = 745320430U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
