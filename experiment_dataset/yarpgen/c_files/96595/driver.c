#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)153;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)250;
unsigned int var_9 = 2635399942U;
unsigned char var_15 = (unsigned char)251;
int zero = 0;
signed char var_18 = (signed char)106;
unsigned char var_19 = (unsigned char)46;
short var_20 = (short)-21937;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
