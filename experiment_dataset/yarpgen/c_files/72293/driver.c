#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-20;
signed char var_5 = (signed char)-42;
unsigned int var_6 = 2713388154U;
signed char var_12 = (signed char)22;
int zero = 0;
unsigned char var_16 = (unsigned char)134;
int var_17 = 1019301682;
unsigned short var_18 = (unsigned short)27447;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
