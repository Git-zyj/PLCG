#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2402585114960895887ULL;
short var_1 = (short)5880;
int var_3 = -1117581219;
unsigned char var_6 = (unsigned char)199;
signed char var_7 = (signed char)-26;
short var_9 = (short)10017;
unsigned int var_12 = 2948262118U;
short var_17 = (short)23438;
int zero = 0;
int var_19 = 1904869589;
unsigned short var_20 = (unsigned short)64467;
unsigned short var_21 = (unsigned short)11610;
signed char var_22 = (signed char)-9;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
