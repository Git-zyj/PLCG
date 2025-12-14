#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 777100466U;
short var_3 = (short)-10112;
int var_5 = 302253622;
_Bool var_17 = (_Bool)1;
int zero = 0;
signed char var_19 = (signed char)-30;
unsigned char var_20 = (unsigned char)210;
void init() {
}

void checksum() {
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
