#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4997;
unsigned short var_5 = (unsigned short)49571;
signed char var_7 = (signed char)89;
unsigned int var_9 = 2011015741U;
int zero = 0;
unsigned char var_10 = (unsigned char)130;
unsigned char var_11 = (unsigned char)51;
short var_12 = (short)-17566;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
