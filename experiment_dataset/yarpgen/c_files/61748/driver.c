#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1400712930;
unsigned long long int var_3 = 16788717690336635681ULL;
unsigned short var_4 = (unsigned short)6824;
int var_9 = -1296656422;
unsigned short var_10 = (unsigned short)25647;
short var_16 = (short)-8647;
signed char var_18 = (signed char)44;
int zero = 0;
int var_19 = 1277538425;
short var_20 = (short)23988;
_Bool var_21 = (_Bool)0;
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
