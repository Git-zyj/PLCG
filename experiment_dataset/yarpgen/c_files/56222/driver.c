#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)57;
unsigned int var_1 = 636100011U;
unsigned int var_4 = 906665091U;
short var_5 = (short)-6148;
unsigned short var_6 = (unsigned short)63092;
int var_7 = 1307915006;
int var_8 = 1467242721;
int var_9 = -1418548150;
int var_10 = 917719095;
int zero = 0;
int var_12 = 1248232180;
unsigned short var_13 = (unsigned short)46400;
int var_14 = -384127665;
unsigned int var_15 = 2571354459U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
