#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)25053;
unsigned char var_10 = (unsigned char)175;
_Bool var_12 = (_Bool)0;
_Bool var_15 = (_Bool)1;
long long int var_17 = 8573386374873293259LL;
int zero = 0;
unsigned long long int var_19 = 16257829567621177107ULL;
short var_20 = (short)-13032;
long long int var_21 = 1800064515222332600LL;
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
