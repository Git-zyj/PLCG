#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)42;
signed char var_4 = (signed char)-74;
signed char var_5 = (signed char)-82;
long long int var_12 = -8340511536373915448LL;
unsigned char var_15 = (unsigned char)114;
int zero = 0;
signed char var_16 = (signed char)-80;
short var_17 = (short)10189;
unsigned char var_18 = (unsigned char)32;
short var_19 = (short)20678;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
