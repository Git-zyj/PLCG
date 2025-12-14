#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42743;
short var_1 = (short)-31713;
short var_2 = (short)10545;
short var_6 = (short)-19018;
short var_7 = (short)-15111;
unsigned int var_8 = 2703372714U;
unsigned char var_11 = (unsigned char)174;
int zero = 0;
unsigned short var_12 = (unsigned short)47503;
short var_13 = (short)-25765;
unsigned int var_14 = 3050197854U;
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
