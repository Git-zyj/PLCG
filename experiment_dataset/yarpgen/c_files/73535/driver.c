#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)62081;
unsigned int var_3 = 223388801U;
int var_7 = 251787779;
unsigned char var_8 = (unsigned char)242;
unsigned long long int var_9 = 2576292577525093914ULL;
int zero = 0;
signed char var_12 = (signed char)-124;
signed char var_13 = (signed char)109;
long long int var_14 = -9152868992924144877LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
