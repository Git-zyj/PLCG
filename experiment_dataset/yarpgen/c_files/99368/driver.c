#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1245198136;
unsigned int var_6 = 3513446836U;
int var_7 = 844764676;
unsigned int var_9 = 2961431712U;
unsigned int var_10 = 2844057126U;
signed char var_13 = (signed char)66;
signed char var_14 = (signed char)-39;
unsigned int var_16 = 4241995813U;
int zero = 0;
signed char var_17 = (signed char)-116;
unsigned short var_18 = (unsigned short)10246;
unsigned long long int var_19 = 4331559642784308017ULL;
unsigned char var_20 = (unsigned char)3;
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
