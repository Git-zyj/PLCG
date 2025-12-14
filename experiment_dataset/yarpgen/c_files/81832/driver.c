#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)42070;
signed char var_5 = (signed char)68;
unsigned char var_7 = (unsigned char)154;
short var_9 = (short)-28832;
int var_10 = 1902471732;
short var_11 = (short)-9145;
int zero = 0;
unsigned int var_12 = 581249171U;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)746;
unsigned char var_15 = (unsigned char)83;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
