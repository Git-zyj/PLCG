#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)855;
unsigned char var_4 = (unsigned char)5;
unsigned int var_7 = 4080307179U;
unsigned char var_9 = (unsigned char)146;
int var_10 = 919534765;
int var_12 = -381118456;
int var_13 = 4789621;
int var_15 = -1151791134;
int var_16 = -287275759;
int zero = 0;
signed char var_17 = (signed char)-87;
unsigned int var_18 = 3100158146U;
void init() {
}

void checksum() {
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
