#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)252;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)188;
_Bool var_16 = (_Bool)0;
unsigned short var_19 = (unsigned short)25869;
int zero = 0;
unsigned int var_20 = 1583056930U;
unsigned char var_21 = (unsigned char)106;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)37791;
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
