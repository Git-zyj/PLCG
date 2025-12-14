#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)111;
unsigned int var_4 = 4216922798U;
unsigned short var_7 = (unsigned short)20354;
unsigned short var_9 = (unsigned short)64699;
unsigned int var_15 = 2394459175U;
int zero = 0;
signed char var_17 = (signed char)55;
signed char var_18 = (signed char)60;
short var_19 = (short)-5774;
short var_20 = (short)4728;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
