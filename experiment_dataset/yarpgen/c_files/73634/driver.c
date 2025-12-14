#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 493658415757727864LL;
int var_1 = -970572360;
unsigned short var_6 = (unsigned short)8969;
unsigned short var_9 = (unsigned short)63588;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned short var_18 = (unsigned short)55015;
signed char var_19 = (signed char)106;
void init() {
}

void checksum() {
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
