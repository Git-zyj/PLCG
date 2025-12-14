#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11118;
unsigned int var_5 = 598856212U;
unsigned int var_8 = 3679787340U;
unsigned char var_10 = (unsigned char)214;
signed char var_14 = (signed char)-24;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 9561823635147074474ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
