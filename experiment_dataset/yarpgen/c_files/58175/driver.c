#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)70;
signed char var_5 = (signed char)-45;
unsigned int var_9 = 1015525114U;
unsigned char var_10 = (unsigned char)186;
int zero = 0;
unsigned short var_19 = (unsigned short)30608;
unsigned long long int var_20 = 3304327598524591676ULL;
unsigned char var_21 = (unsigned char)114;
void init() {
}

void checksum() {
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
