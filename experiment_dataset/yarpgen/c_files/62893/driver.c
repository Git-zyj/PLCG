#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)171;
long long int var_2 = -7350842454006509011LL;
unsigned long long int var_3 = 15682414029194831398ULL;
unsigned char var_4 = (unsigned char)113;
unsigned short var_6 = (unsigned short)49483;
unsigned short var_7 = (unsigned short)61562;
unsigned int var_9 = 1923078277U;
signed char var_12 = (signed char)-124;
int zero = 0;
unsigned short var_14 = (unsigned short)2245;
short var_15 = (short)-31487;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
