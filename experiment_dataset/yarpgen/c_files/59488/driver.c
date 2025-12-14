#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 237714341;
signed char var_9 = (signed char)(-127 - 1);
short var_10 = (short)-5068;
int var_11 = 91025346;
unsigned char var_15 = (unsigned char)46;
int zero = 0;
signed char var_20 = (signed char)-4;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1177109594U;
void init() {
}

void checksum() {
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
