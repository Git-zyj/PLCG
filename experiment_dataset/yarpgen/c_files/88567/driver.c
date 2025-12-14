#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)206;
short var_1 = (short)21309;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)28;
signed char var_10 = (signed char)36;
unsigned char var_14 = (unsigned char)60;
int zero = 0;
short var_16 = (short)-54;
signed char var_17 = (signed char)94;
unsigned char var_18 = (unsigned char)9;
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
