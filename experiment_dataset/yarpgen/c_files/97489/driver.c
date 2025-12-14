#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)56;
signed char var_2 = (signed char)119;
unsigned long long int var_4 = 6444295006006433523ULL;
short var_5 = (short)12555;
unsigned short var_6 = (unsigned short)13489;
signed char var_8 = (signed char)-34;
unsigned short var_9 = (unsigned short)46072;
int zero = 0;
unsigned char var_12 = (unsigned char)111;
unsigned char var_13 = (unsigned char)150;
unsigned char var_14 = (unsigned char)178;
unsigned int var_15 = 335512619U;
unsigned char var_16 = (unsigned char)196;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
