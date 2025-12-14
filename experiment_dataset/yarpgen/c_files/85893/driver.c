#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 1438822571U;
unsigned long long int var_10 = 15337594612001468680ULL;
unsigned char var_14 = (unsigned char)80;
unsigned short var_16 = (unsigned short)24984;
int zero = 0;
short var_19 = (short)-26952;
unsigned long long int var_20 = 5771480772599141367ULL;
unsigned char var_21 = (unsigned char)171;
unsigned int var_22 = 1702779028U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
