#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6984;
signed char var_3 = (signed char)-70;
unsigned short var_4 = (unsigned short)38340;
signed char var_6 = (signed char)-22;
unsigned long long int var_9 = 16995510586792745056ULL;
signed char var_13 = (signed char)114;
unsigned short var_14 = (unsigned short)7447;
signed char var_16 = (signed char)-122;
int zero = 0;
signed char var_20 = (signed char)-11;
signed char var_21 = (signed char)-19;
unsigned int var_22 = 2442266701U;
signed char var_23 = (signed char)-124;
signed char var_24 = (signed char)72;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
