#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 183832428;
unsigned short var_5 = (unsigned short)7449;
unsigned char var_6 = (unsigned char)66;
unsigned short var_8 = (unsigned short)14005;
unsigned long long int var_15 = 12507272941163208665ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)46574;
short var_18 = (short)-25646;
unsigned int var_19 = 392169658U;
void init() {
}

void checksum() {
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
