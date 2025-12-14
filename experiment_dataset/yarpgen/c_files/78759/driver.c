#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)90;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 1050357091017434497ULL;
unsigned int var_8 = 970369627U;
short var_9 = (short)-9537;
unsigned int var_11 = 1629170518U;
int zero = 0;
unsigned short var_18 = (unsigned short)40100;
signed char var_19 = (signed char)-31;
short var_20 = (short)21853;
unsigned long long int var_21 = 18199053541156087749ULL;
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
