#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)207;
unsigned char var_4 = (unsigned char)201;
int var_6 = -365334452;
_Bool var_8 = (_Bool)0;
short var_9 = (short)22509;
int var_11 = 1863245847;
int zero = 0;
short var_13 = (short)-29151;
int var_14 = -1932768958;
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
