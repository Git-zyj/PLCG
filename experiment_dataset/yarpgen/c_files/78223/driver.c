#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)17654;
unsigned int var_6 = 3194146779U;
short var_8 = (short)17488;
int var_9 = -985819151;
int zero = 0;
short var_12 = (short)-5657;
_Bool var_13 = (_Bool)0;
int var_14 = -1845839047;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
