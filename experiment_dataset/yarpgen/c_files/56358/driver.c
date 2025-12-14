#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14486;
unsigned short var_1 = (unsigned short)52034;
int var_4 = -406289322;
int var_7 = -1456728095;
unsigned int var_8 = 3433784826U;
unsigned char var_9 = (unsigned char)166;
unsigned char var_11 = (unsigned char)31;
unsigned short var_14 = (unsigned short)49191;
int zero = 0;
int var_16 = 1984362308;
int var_17 = -1670696545;
void init() {
}

void checksum() {
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
