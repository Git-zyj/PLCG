#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)17358;
unsigned int var_4 = 2711482432U;
unsigned short var_5 = (unsigned short)15513;
int var_6 = -1025471514;
short var_7 = (short)-30032;
short var_9 = (short)10496;
signed char var_10 = (signed char)120;
short var_13 = (short)-7919;
int var_14 = 1846337795;
int zero = 0;
long long int var_18 = -5616875935642258857LL;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)21917;
signed char var_21 = (signed char)44;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
