#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9605;
unsigned char var_4 = (unsigned char)142;
signed char var_7 = (signed char)111;
unsigned char var_9 = (unsigned char)200;
signed char var_10 = (signed char)-55;
long long int var_15 = 9195254307137001714LL;
signed char var_16 = (signed char)-92;
int zero = 0;
unsigned short var_17 = (unsigned short)64182;
short var_18 = (short)-23123;
short var_19 = (short)22776;
unsigned char var_20 = (unsigned char)149;
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
