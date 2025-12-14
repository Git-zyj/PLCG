#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4404649206547241682LL;
unsigned short var_8 = (unsigned short)25700;
unsigned int var_9 = 3759038277U;
long long int var_10 = -6568269516847874505LL;
unsigned int var_11 = 1131066743U;
unsigned short var_15 = (unsigned short)343;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)116;
unsigned int var_18 = 2956943315U;
signed char var_19 = (signed char)-84;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
