#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)139;
unsigned char var_2 = (unsigned char)20;
signed char var_5 = (signed char)-118;
unsigned char var_8 = (unsigned char)29;
signed char var_9 = (signed char)-50;
signed char var_12 = (signed char)8;
int zero = 0;
int var_13 = 372093831;
unsigned int var_14 = 512839789U;
void init() {
}

void checksum() {
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
