#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1295780681;
unsigned short var_5 = (unsigned short)39258;
signed char var_7 = (signed char)-95;
signed char var_14 = (signed char)-59;
int zero = 0;
int var_17 = -955209348;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)47751;
short var_20 = (short)10275;
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
