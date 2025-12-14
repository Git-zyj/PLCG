#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)36;
unsigned int var_1 = 3812512116U;
short var_2 = (short)-11968;
signed char var_3 = (signed char)-126;
signed char var_4 = (signed char)-83;
unsigned short var_5 = (unsigned short)20303;
unsigned int var_6 = 4162440559U;
unsigned int var_9 = 800948364U;
int var_10 = 596592996;
unsigned char var_16 = (unsigned char)100;
int zero = 0;
unsigned short var_17 = (unsigned short)43146;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 4504441268339395247ULL;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
