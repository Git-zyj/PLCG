#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)43355;
short var_6 = (short)15931;
unsigned short var_8 = (unsigned short)54038;
unsigned int var_10 = 496205773U;
signed char var_11 = (signed char)-88;
unsigned char var_12 = (unsigned char)249;
int zero = 0;
short var_13 = (short)32539;
unsigned char var_14 = (unsigned char)172;
void init() {
}

void checksum() {
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
