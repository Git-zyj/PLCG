#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)79;
unsigned int var_3 = 818227567U;
_Bool var_4 = (_Bool)0;
signed char var_11 = (signed char)-74;
int zero = 0;
unsigned char var_13 = (unsigned char)204;
unsigned char var_14 = (unsigned char)102;
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
