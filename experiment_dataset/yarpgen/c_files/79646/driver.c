#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4880863018808782346LL;
long long int var_6 = 8659258596855637443LL;
unsigned char var_7 = (unsigned char)1;
unsigned short var_8 = (unsigned short)53180;
int zero = 0;
signed char var_11 = (signed char)116;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
