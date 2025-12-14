#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2499929053U;
unsigned short var_1 = (unsigned short)64785;
long long int var_2 = 4170894410567240937LL;
unsigned int var_3 = 4172441862U;
unsigned short var_4 = (unsigned short)36817;
signed char var_5 = (signed char)69;
unsigned short var_8 = (unsigned short)53966;
signed char var_9 = (signed char)-67;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 1602455237U;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 63064451U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
