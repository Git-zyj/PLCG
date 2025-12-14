#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)123;
unsigned short var_4 = (unsigned short)44219;
signed char var_5 = (signed char)63;
short var_6 = (short)-26008;
int var_11 = 1299550461;
int var_12 = 1311918200;
unsigned char var_14 = (unsigned char)100;
int zero = 0;
_Bool var_16 = (_Bool)0;
short var_17 = (short)9806;
unsigned int var_18 = 995993188U;
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
