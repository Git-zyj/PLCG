#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-10241;
unsigned long long int var_4 = 1574147611984123114ULL;
short var_7 = (short)23438;
signed char var_10 = (signed char)30;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 142006516U;
signed char var_18 = (signed char)-126;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)35;
unsigned int var_21 = 4061711392U;
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
