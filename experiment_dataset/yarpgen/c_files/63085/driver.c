#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)94;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
short var_6 = (short)18883;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)66;
unsigned char var_12 = (unsigned char)104;
short var_15 = (short)-4948;
int zero = 0;
unsigned short var_16 = (unsigned short)37570;
signed char var_17 = (signed char)-45;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
