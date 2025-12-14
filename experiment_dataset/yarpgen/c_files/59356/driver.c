#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 121937086U;
signed char var_7 = (signed char)9;
unsigned short var_15 = (unsigned short)60630;
short var_16 = (short)28085;
int zero = 0;
unsigned char var_17 = (unsigned char)111;
int var_18 = -2082644028;
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
