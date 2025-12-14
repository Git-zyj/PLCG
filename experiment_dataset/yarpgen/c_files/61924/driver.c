#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1515117487U;
unsigned char var_3 = (unsigned char)232;
unsigned short var_4 = (unsigned short)49079;
short var_6 = (short)18115;
int var_10 = 1714043506;
int zero = 0;
unsigned int var_12 = 3484892771U;
unsigned int var_13 = 1008536672U;
unsigned long long int var_14 = 18174239083197656448ULL;
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
