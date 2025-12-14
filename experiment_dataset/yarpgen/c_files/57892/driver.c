#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1854913906;
unsigned char var_4 = (unsigned char)204;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)28;
int var_11 = -1258582932;
short var_14 = (short)-28031;
int zero = 0;
unsigned char var_16 = (unsigned char)185;
signed char var_17 = (signed char)39;
unsigned short var_18 = (unsigned short)23762;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
