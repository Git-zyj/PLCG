#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-60;
_Bool var_4 = (_Bool)1;
unsigned char var_9 = (unsigned char)23;
int zero = 0;
unsigned char var_14 = (unsigned char)74;
short var_15 = (short)-23100;
long long int var_16 = 7835297963417496015LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
