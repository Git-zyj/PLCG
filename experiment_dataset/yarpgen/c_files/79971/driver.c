#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)109;
unsigned char var_1 = (unsigned char)238;
unsigned char var_3 = (unsigned char)19;
short var_4 = (short)-19739;
long long int var_5 = -8096823250209001939LL;
unsigned long long int var_6 = 12696227678648731461ULL;
unsigned char var_10 = (unsigned char)91;
unsigned int var_11 = 3344060313U;
short var_12 = (short)-7548;
unsigned long long int var_13 = 5634932394205820627ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)60388;
signed char var_15 = (signed char)-110;
int var_16 = -1445957080;
int var_17 = -2069209098;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
