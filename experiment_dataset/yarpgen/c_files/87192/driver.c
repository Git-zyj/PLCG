#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-106;
unsigned int var_3 = 2539639569U;
unsigned char var_5 = (unsigned char)207;
unsigned long long int var_8 = 7302447394061610687ULL;
unsigned char var_9 = (unsigned char)17;
unsigned char var_12 = (unsigned char)69;
unsigned char var_13 = (unsigned char)99;
signed char var_14 = (signed char)-67;
int zero = 0;
unsigned int var_15 = 1036578143U;
unsigned int var_16 = 3219023698U;
unsigned long long int var_17 = 14548961433855657274ULL;
void init() {
}

void checksum() {
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
