#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)222;
unsigned short var_1 = (unsigned short)38999;
_Bool var_5 = (_Bool)1;
short var_6 = (short)-3114;
unsigned short var_7 = (unsigned short)1780;
int zero = 0;
int var_11 = -432199883;
short var_12 = (short)-8590;
int var_13 = 2013469327;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
