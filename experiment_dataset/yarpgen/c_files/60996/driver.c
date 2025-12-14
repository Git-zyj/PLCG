#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11220;
int var_1 = 376334777;
unsigned short var_3 = (unsigned short)10344;
unsigned char var_7 = (unsigned char)200;
int zero = 0;
short var_16 = (short)-25700;
int var_17 = 263233219;
unsigned char var_18 = (unsigned char)45;
unsigned char var_19 = (unsigned char)225;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
