#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-98;
short var_6 = (short)-20358;
unsigned short var_9 = (unsigned short)39934;
int var_11 = -30908925;
int zero = 0;
unsigned int var_18 = 271310417U;
signed char var_19 = (signed char)120;
unsigned short var_20 = (unsigned short)26293;
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
