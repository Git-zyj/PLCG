#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -7827685109412030940LL;
short var_8 = (short)5328;
long long int var_12 = 4094752221990910125LL;
unsigned short var_14 = (unsigned short)60610;
unsigned char var_16 = (unsigned char)200;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 4074926813628100052LL;
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
