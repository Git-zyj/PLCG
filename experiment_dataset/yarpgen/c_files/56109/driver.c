#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8099;
int var_3 = 1959048981;
unsigned char var_4 = (unsigned char)221;
short var_6 = (short)13572;
int var_7 = 461707209;
short var_9 = (short)-23613;
unsigned short var_10 = (unsigned short)48816;
int zero = 0;
short var_12 = (short)29312;
short var_13 = (short)-2025;
signed char var_14 = (signed char)-63;
unsigned short var_15 = (unsigned short)13616;
long long int var_16 = 4871232656797953791LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
