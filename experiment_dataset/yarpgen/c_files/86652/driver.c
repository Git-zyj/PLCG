#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 817385493U;
short var_1 = (short)532;
unsigned long long int var_2 = 14576269760556297796ULL;
short var_5 = (short)-16963;
unsigned long long int var_6 = 9850457021682233338ULL;
unsigned short var_15 = (unsigned short)15947;
int zero = 0;
int var_20 = 2116394198;
signed char var_21 = (signed char)47;
void init() {
}

void checksum() {
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
