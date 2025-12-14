#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-85;
_Bool var_2 = (_Bool)0;
int var_4 = 886908956;
unsigned int var_5 = 2922394426U;
unsigned char var_7 = (unsigned char)107;
long long int var_8 = -8495510779858699410LL;
int zero = 0;
int var_13 = -613540791;
short var_14 = (short)23061;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
