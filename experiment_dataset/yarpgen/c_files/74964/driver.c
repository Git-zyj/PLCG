#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-94;
int var_4 = -1471852731;
unsigned short var_12 = (unsigned short)55392;
int var_13 = -1308525114;
unsigned short var_14 = (unsigned short)64291;
unsigned char var_16 = (unsigned char)202;
int zero = 0;
signed char var_20 = (signed char)-80;
unsigned short var_21 = (unsigned short)22054;
signed char var_22 = (signed char)38;
signed char var_23 = (signed char)-34;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
