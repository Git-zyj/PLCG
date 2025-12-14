#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57892;
unsigned int var_6 = 362839518U;
signed char var_9 = (signed char)43;
unsigned short var_13 = (unsigned short)44017;
unsigned int var_16 = 1064613249U;
unsigned short var_19 = (unsigned short)35208;
int zero = 0;
short var_20 = (short)25389;
int var_21 = -961836963;
int var_22 = 1141944650;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
