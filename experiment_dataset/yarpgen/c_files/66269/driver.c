#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16807923652799967902ULL;
_Bool var_1 = (_Bool)0;
unsigned int var_6 = 2079514185U;
unsigned short var_7 = (unsigned short)32481;
short var_8 = (short)-9110;
int zero = 0;
unsigned int var_11 = 170606736U;
unsigned short var_12 = (unsigned short)61906;
unsigned int var_13 = 2184968158U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
