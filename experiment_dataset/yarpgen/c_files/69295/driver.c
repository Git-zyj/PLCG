#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-80;
_Bool var_5 = (_Bool)0;
unsigned short var_8 = (unsigned short)20728;
short var_12 = (short)-6856;
int zero = 0;
unsigned short var_14 = (unsigned short)7516;
int var_15 = -1181864180;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
