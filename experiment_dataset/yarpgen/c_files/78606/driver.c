#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-16;
unsigned int var_7 = 3812288914U;
int var_9 = 674659394;
signed char var_13 = (signed char)68;
int zero = 0;
unsigned int var_14 = 1684524118U;
signed char var_15 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
