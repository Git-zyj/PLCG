#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1189930596U;
unsigned short var_1 = (unsigned short)28543;
unsigned short var_4 = (unsigned short)54632;
short var_5 = (short)-2439;
short var_8 = (short)-843;
int var_11 = -73777092;
int zero = 0;
_Bool var_12 = (_Bool)0;
int var_13 = 1489186917;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
