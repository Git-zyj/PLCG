#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7085491919150026230ULL;
int var_4 = 1772351222;
signed char var_8 = (signed char)-41;
signed char var_9 = (signed char)-101;
int var_10 = -1809938403;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 592687946U;
signed char var_15 = (signed char)45;
unsigned char var_16 = (unsigned char)65;
int var_17 = -1273844341;
void init() {
}

void checksum() {
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
