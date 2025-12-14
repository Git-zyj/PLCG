#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
int var_8 = 2109338743;
signed char var_9 = (signed char)58;
int zero = 0;
unsigned long long int var_17 = 12637682270866509023ULL;
long long int var_18 = 935223616030266170LL;
unsigned char var_19 = (unsigned char)4;
unsigned char var_20 = (unsigned char)215;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
