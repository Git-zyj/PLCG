#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)75;
signed char var_3 = (signed char)117;
signed char var_9 = (signed char)73;
unsigned short var_13 = (unsigned short)22266;
int zero = 0;
unsigned char var_20 = (unsigned char)180;
signed char var_21 = (signed char)-91;
unsigned int var_22 = 1190091624U;
int var_23 = -973230157;
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
