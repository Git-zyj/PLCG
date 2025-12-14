#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -7037801946350734861LL;
signed char var_6 = (signed char)112;
int var_8 = 1817031063;
signed char var_9 = (signed char)-77;
unsigned int var_14 = 1982993419U;
int zero = 0;
unsigned int var_18 = 3024891624U;
unsigned int var_19 = 697825651U;
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
