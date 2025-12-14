#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)4447;
long long int var_4 = -2052622881102793064LL;
unsigned int var_5 = 779972467U;
unsigned char var_9 = (unsigned char)72;
unsigned short var_10 = (unsigned short)41795;
unsigned short var_12 = (unsigned short)46912;
int zero = 0;
short var_13 = (short)-21592;
unsigned int var_14 = 2829781098U;
unsigned short var_15 = (unsigned short)12439;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
