#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-28858;
short var_2 = (short)-29454;
short var_8 = (short)-26783;
unsigned char var_10 = (unsigned char)139;
unsigned char var_12 = (unsigned char)76;
int zero = 0;
unsigned char var_17 = (unsigned char)129;
short var_18 = (short)-29680;
short var_19 = (short)-1699;
unsigned char var_20 = (unsigned char)33;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
