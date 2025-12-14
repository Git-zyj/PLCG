#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)10594;
short var_3 = (short)23158;
unsigned long long int var_5 = 16386689587409354748ULL;
short var_9 = (short)19337;
int var_11 = -306434097;
int var_12 = -1863534721;
unsigned char var_14 = (unsigned char)28;
int zero = 0;
unsigned char var_17 = (unsigned char)244;
int var_18 = -2128404731;
unsigned short var_19 = (unsigned short)44121;
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
