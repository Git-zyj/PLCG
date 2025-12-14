#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1752722680;
signed char var_2 = (signed char)95;
signed char var_4 = (signed char)33;
_Bool var_8 = (_Bool)1;
unsigned char var_9 = (unsigned char)116;
unsigned short var_11 = (unsigned short)8331;
unsigned char var_12 = (unsigned char)35;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)21;
unsigned char var_18 = (unsigned char)225;
signed char var_19 = (signed char)85;
unsigned char var_20 = (unsigned char)45;
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
