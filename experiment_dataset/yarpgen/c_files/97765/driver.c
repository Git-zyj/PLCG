#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19001;
signed char var_2 = (signed char)117;
unsigned int var_4 = 3041355438U;
unsigned char var_9 = (unsigned char)220;
int zero = 0;
unsigned short var_13 = (unsigned short)24087;
unsigned char var_14 = (unsigned char)83;
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
