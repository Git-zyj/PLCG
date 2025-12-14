#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)16086;
short var_4 = (short)5880;
_Bool var_6 = (_Bool)1;
unsigned long long int var_8 = 434129194726825915ULL;
int zero = 0;
int var_12 = 1992164177;
short var_13 = (short)8408;
void init() {
}

void checksum() {
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
