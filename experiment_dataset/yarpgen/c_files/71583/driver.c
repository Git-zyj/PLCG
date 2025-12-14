#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1391887823;
unsigned short var_6 = (unsigned short)64920;
short var_9 = (short)29781;
int zero = 0;
unsigned char var_12 = (unsigned char)28;
unsigned short var_13 = (unsigned short)52683;
unsigned int var_14 = 1271174947U;
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
