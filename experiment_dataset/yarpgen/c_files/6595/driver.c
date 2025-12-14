#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55381;
short var_1 = (short)-16360;
unsigned char var_5 = (unsigned char)215;
unsigned char var_6 = (unsigned char)92;
int zero = 0;
signed char var_13 = (signed char)-72;
unsigned short var_14 = (unsigned short)38870;
_Bool var_15 = (_Bool)0;
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
