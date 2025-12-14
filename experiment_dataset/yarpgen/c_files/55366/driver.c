#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-6;
_Bool var_9 = (_Bool)0;
int var_11 = -1234330472;
unsigned char var_12 = (unsigned char)185;
long long int var_16 = -4625505440915669711LL;
signed char var_17 = (signed char)114;
int zero = 0;
int var_18 = -564903871;
int var_19 = 23119982;
short var_20 = (short)-4905;
void init() {
}

void checksum() {
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
