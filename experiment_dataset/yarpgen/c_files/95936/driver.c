#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17507;
short var_2 = (short)-29418;
short var_6 = (short)8005;
short var_7 = (short)-26598;
signed char var_9 = (signed char)110;
unsigned char var_10 = (unsigned char)11;
unsigned char var_11 = (unsigned char)119;
int zero = 0;
unsigned char var_14 = (unsigned char)140;
unsigned short var_15 = (unsigned short)33654;
unsigned long long int var_16 = 10525083033812366915ULL;
void init() {
}

void checksum() {
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
