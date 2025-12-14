#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9431;
unsigned int var_2 = 2908206803U;
_Bool var_5 = (_Bool)0;
short var_6 = (short)-31821;
unsigned short var_7 = (unsigned short)33115;
unsigned char var_10 = (unsigned char)59;
int var_11 = 831533391;
unsigned short var_12 = (unsigned short)15273;
_Bool var_14 = (_Bool)1;
int zero = 0;
long long int var_17 = -5090978019961850107LL;
long long int var_18 = -1974523441520708101LL;
void init() {
}

void checksum() {
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
