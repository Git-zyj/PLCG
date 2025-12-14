#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2672026246U;
int var_5 = -1444693843;
short var_7 = (short)4141;
long long int var_8 = 6806910443591482078LL;
unsigned long long int var_10 = 13739808495343317506ULL;
unsigned long long int var_11 = 9264939623116019978ULL;
unsigned char var_15 = (unsigned char)145;
int zero = 0;
short var_16 = (short)11948;
unsigned short var_17 = (unsigned short)59933;
long long int var_18 = 4220152147314044399LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
