#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-116;
unsigned short var_1 = (unsigned short)4064;
unsigned char var_3 = (unsigned char)144;
unsigned short var_4 = (unsigned short)47358;
unsigned long long int var_5 = 2363171789667122218ULL;
unsigned long long int var_9 = 15804697217805931247ULL;
int zero = 0;
short var_11 = (short)-28983;
unsigned char var_12 = (unsigned char)58;
unsigned short var_13 = (unsigned short)51451;
short var_14 = (short)-4548;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
