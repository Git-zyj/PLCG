#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)97;
short var_2 = (short)18016;
unsigned char var_12 = (unsigned char)159;
int var_13 = -921317632;
signed char var_14 = (signed char)-1;
unsigned int var_15 = 2471584031U;
int zero = 0;
int var_17 = -1064781305;
signed char var_18 = (signed char)7;
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
