#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4118;
unsigned short var_2 = (unsigned short)25094;
short var_5 = (short)-13136;
short var_6 = (short)29449;
unsigned char var_12 = (unsigned char)253;
signed char var_17 = (signed char)-25;
int zero = 0;
int var_19 = -822214326;
unsigned short var_20 = (unsigned short)9344;
void init() {
}

void checksum() {
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
