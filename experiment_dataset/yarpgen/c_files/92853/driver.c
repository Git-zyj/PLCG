#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-127;
signed char var_2 = (signed char)-111;
unsigned char var_3 = (unsigned char)248;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 2341431858520485181ULL;
unsigned int var_10 = 4112226372U;
unsigned short var_13 = (unsigned short)49132;
unsigned int var_16 = 3158847965U;
signed char var_17 = (signed char)-75;
short var_19 = (short)13624;
int zero = 0;
unsigned int var_20 = 2141021093U;
signed char var_21 = (signed char)-65;
short var_22 = (short)31923;
short var_23 = (short)20493;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
