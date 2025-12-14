#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -2060500297;
_Bool var_2 = (_Bool)1;
int var_3 = -188987411;
unsigned short var_13 = (unsigned short)42373;
int zero = 0;
int var_16 = -1140761289;
unsigned short var_17 = (unsigned short)39505;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
