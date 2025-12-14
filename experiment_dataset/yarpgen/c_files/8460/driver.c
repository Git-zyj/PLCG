#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-112;
unsigned short var_3 = (unsigned short)47600;
long long int var_4 = -5541551872652822827LL;
_Bool var_5 = (_Bool)1;
short var_6 = (short)30459;
unsigned int var_7 = 720506528U;
int var_9 = 921146019;
int var_16 = -50147346;
int zero = 0;
unsigned short var_18 = (unsigned short)15544;
short var_19 = (short)-28972;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
