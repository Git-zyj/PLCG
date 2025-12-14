#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7992510900307753034LL;
unsigned char var_5 = (unsigned char)219;
unsigned char var_9 = (unsigned char)46;
short var_19 = (short)-1207;
int zero = 0;
unsigned char var_20 = (unsigned char)238;
signed char var_21 = (signed char)85;
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
