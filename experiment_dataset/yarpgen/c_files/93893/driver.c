#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11840;
_Bool var_4 = (_Bool)0;
int var_7 = -1606117421;
unsigned char var_9 = (unsigned char)237;
signed char var_16 = (signed char)-47;
int zero = 0;
signed char var_17 = (signed char)62;
unsigned short var_18 = (unsigned short)23606;
short var_19 = (short)14807;
int var_20 = -2088288603;
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
