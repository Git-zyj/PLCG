#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)59555;
unsigned char var_4 = (unsigned char)122;
unsigned int var_13 = 561705460U;
signed char var_17 = (signed char)65;
int zero = 0;
unsigned int var_18 = 2700995885U;
unsigned int var_19 = 4045751356U;
signed char var_20 = (signed char)121;
unsigned short var_21 = (unsigned short)10356;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
