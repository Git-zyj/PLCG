#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-17163;
unsigned int var_11 = 585228932U;
unsigned int var_14 = 3128771600U;
int var_17 = 61019074;
int zero = 0;
unsigned short var_18 = (unsigned short)9075;
signed char var_19 = (signed char)-12;
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
