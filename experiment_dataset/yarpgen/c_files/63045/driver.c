#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2689205173323907149LL;
unsigned int var_1 = 2943576048U;
short var_5 = (short)27694;
unsigned int var_6 = 3766768640U;
long long int var_12 = 1027752417295938894LL;
short var_14 = (short)-12321;
int zero = 0;
short var_18 = (short)1015;
unsigned long long int var_19 = 5345512429061651390ULL;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 3899175623U;
void init() {
}

void checksum() {
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
