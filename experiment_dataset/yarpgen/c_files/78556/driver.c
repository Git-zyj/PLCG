#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)38023;
unsigned short var_4 = (unsigned short)56552;
int var_9 = 2105668798;
signed char var_11 = (signed char)-81;
short var_17 = (short)-26183;
int zero = 0;
unsigned char var_19 = (unsigned char)17;
unsigned short var_20 = (unsigned short)9084;
signed char var_21 = (signed char)-5;
long long int var_22 = -3274529390015524143LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
