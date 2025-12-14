#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-111;
unsigned int var_9 = 488095306U;
short var_12 = (short)-21664;
short var_14 = (short)23587;
int zero = 0;
signed char var_17 = (signed char)100;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)40;
int var_20 = -1662635204;
unsigned short var_21 = (unsigned short)54525;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
