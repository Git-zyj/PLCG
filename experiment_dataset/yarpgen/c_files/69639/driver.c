#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)92;
signed char var_5 = (signed char)-44;
unsigned char var_7 = (unsigned char)137;
signed char var_8 = (signed char)-59;
unsigned char var_10 = (unsigned char)174;
int zero = 0;
signed char var_20 = (signed char)124;
unsigned char var_21 = (unsigned char)225;
void init() {
}

void checksum() {
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
