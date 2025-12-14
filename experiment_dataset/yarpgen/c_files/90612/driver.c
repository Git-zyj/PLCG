#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
short var_13 = (short)19138;
unsigned short var_15 = (unsigned short)23651;
signed char var_17 = (signed char)116;
short var_18 = (short)-432;
int zero = 0;
unsigned char var_20 = (unsigned char)181;
unsigned int var_21 = 3112682254U;
short var_22 = (short)-8055;
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
