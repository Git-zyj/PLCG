#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)249;
unsigned char var_5 = (unsigned char)148;
unsigned char var_7 = (unsigned char)108;
int var_8 = -200963007;
signed char var_10 = (signed char)27;
unsigned int var_12 = 643309606U;
unsigned int var_16 = 2724992900U;
int zero = 0;
unsigned char var_18 = (unsigned char)20;
unsigned int var_19 = 4078923641U;
void init() {
}

void checksum() {
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
