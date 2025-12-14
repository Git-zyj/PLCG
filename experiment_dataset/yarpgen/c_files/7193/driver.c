#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)89;
int var_2 = -1269878051;
short var_3 = (short)-20397;
unsigned int var_7 = 1062590984U;
short var_10 = (short)31743;
unsigned short var_12 = (unsigned short)20658;
int zero = 0;
unsigned char var_13 = (unsigned char)233;
unsigned int var_14 = 1084912686U;
unsigned char var_15 = (unsigned char)7;
void init() {
}

void checksum() {
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
