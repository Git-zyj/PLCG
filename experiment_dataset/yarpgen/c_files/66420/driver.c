#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)17065;
unsigned short var_8 = (unsigned short)34622;
_Bool var_9 = (_Bool)1;
unsigned char var_12 = (unsigned char)219;
int zero = 0;
unsigned char var_14 = (unsigned char)69;
unsigned char var_15 = (unsigned char)214;
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
