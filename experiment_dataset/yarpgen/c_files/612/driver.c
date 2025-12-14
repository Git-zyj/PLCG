#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)5523;
int var_7 = 1790502763;
signed char var_12 = (signed char)-116;
signed char var_13 = (signed char)-65;
long long int var_14 = 78600362993275831LL;
int zero = 0;
unsigned char var_16 = (unsigned char)5;
int var_17 = 506788537;
unsigned long long int var_18 = 9288607909660259460ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
