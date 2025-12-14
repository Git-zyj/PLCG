#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)58;
unsigned short var_5 = (unsigned short)291;
short var_7 = (short)-4630;
unsigned short var_11 = (unsigned short)53598;
short var_12 = (short)16991;
int zero = 0;
unsigned int var_13 = 1464694306U;
unsigned short var_14 = (unsigned short)16732;
unsigned char var_15 = (unsigned char)76;
unsigned short var_16 = (unsigned short)41938;
signed char var_17 = (signed char)-34;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
