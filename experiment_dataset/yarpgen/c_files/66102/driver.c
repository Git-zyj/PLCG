#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3674394872280415301LL;
unsigned char var_6 = (unsigned char)60;
signed char var_18 = (signed char)-45;
int zero = 0;
unsigned short var_19 = (unsigned short)59857;
short var_20 = (short)-29796;
short var_21 = (short)29627;
int var_22 = -2046285284;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
