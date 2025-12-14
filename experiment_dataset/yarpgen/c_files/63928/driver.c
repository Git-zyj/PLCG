#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_4 = (unsigned short)8850;
unsigned short var_8 = (unsigned short)39987;
short var_9 = (short)-59;
signed char var_11 = (signed char)-20;
short var_12 = (short)1875;
unsigned char var_14 = (unsigned char)213;
int zero = 0;
short var_17 = (short)25006;
signed char var_18 = (signed char)-124;
unsigned char var_19 = (unsigned char)102;
short var_20 = (short)6948;
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
