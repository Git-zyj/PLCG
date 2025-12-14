#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15419907658484683004ULL;
unsigned long long int var_3 = 5044194789271596740ULL;
signed char var_5 = (signed char)-97;
unsigned int var_7 = 2814634276U;
int zero = 0;
unsigned int var_10 = 1523232750U;
unsigned short var_11 = (unsigned short)6225;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
