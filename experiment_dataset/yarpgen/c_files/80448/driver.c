#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)42601;
_Bool var_3 = (_Bool)1;
int var_5 = 1384365493;
unsigned short var_6 = (unsigned short)14582;
int var_8 = -1222263820;
int zero = 0;
signed char var_10 = (signed char)59;
int var_11 = 207574799;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
