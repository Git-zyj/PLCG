#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_6 = (_Bool)0;
short var_12 = (short)-29230;
int zero = 0;
unsigned char var_15 = (unsigned char)196;
signed char var_16 = (signed char)125;
long long int var_17 = 9134899087388732141LL;
unsigned char var_18 = (unsigned char)69;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
