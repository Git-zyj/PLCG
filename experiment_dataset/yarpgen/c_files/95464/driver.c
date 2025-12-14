#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)70;
_Bool var_3 = (_Bool)1;
short var_5 = (short)872;
short var_6 = (short)-29223;
unsigned short var_7 = (unsigned short)1039;
short var_8 = (short)25324;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)37046;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
