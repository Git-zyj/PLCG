#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2371662506U;
long long int var_9 = 9034334599787502520LL;
short var_12 = (short)-10474;
unsigned short var_16 = (unsigned short)17189;
unsigned int var_18 = 2481833220U;
int zero = 0;
int var_19 = -1543434415;
unsigned short var_20 = (unsigned short)62407;
signed char var_21 = (signed char)-99;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
