#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 873538652;
int var_4 = -741289064;
unsigned char var_8 = (unsigned char)222;
short var_11 = (short)-20051;
int var_12 = -90998554;
unsigned char var_13 = (unsigned char)255;
short var_14 = (short)-30458;
int zero = 0;
short var_16 = (short)-3992;
unsigned char var_17 = (unsigned char)99;
unsigned char var_18 = (unsigned char)82;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
