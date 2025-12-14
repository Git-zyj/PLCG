#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20219;
signed char var_2 = (signed char)55;
unsigned short var_3 = (unsigned short)65097;
unsigned short var_12 = (unsigned short)35701;
unsigned char var_13 = (unsigned char)108;
unsigned long long int var_16 = 1134526393484430001ULL;
unsigned int var_17 = 757137505U;
int zero = 0;
short var_18 = (short)-11302;
signed char var_19 = (signed char)-16;
unsigned int var_20 = 1855740807U;
unsigned int var_21 = 781983633U;
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
