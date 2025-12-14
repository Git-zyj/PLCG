#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_14 = (unsigned char)107;
signed char var_15 = (signed char)23;
unsigned short var_17 = (unsigned short)57219;
short var_18 = (short)19289;
int zero = 0;
short var_19 = (short)-8855;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-101;
void init() {
}

void checksum() {
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
