#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)49;
unsigned char var_4 = (unsigned char)106;
unsigned short var_7 = (unsigned short)18160;
unsigned int var_9 = 3880398121U;
unsigned int var_12 = 846279972U;
int zero = 0;
int var_13 = -449444431;
unsigned int var_14 = 997479002U;
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
