#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29079;
unsigned char var_9 = (unsigned char)204;
unsigned int var_11 = 1717596157U;
unsigned short var_12 = (unsigned short)31418;
unsigned int var_15 = 2383923852U;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 879212536U;
unsigned long long int var_19 = 2863881125993209557ULL;
unsigned int var_20 = 2147737417U;
unsigned char var_21 = (unsigned char)153;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
