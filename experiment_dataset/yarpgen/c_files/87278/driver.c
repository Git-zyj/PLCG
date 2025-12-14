#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)63;
unsigned int var_2 = 3223650316U;
unsigned char var_3 = (unsigned char)123;
unsigned char var_4 = (unsigned char)220;
unsigned long long int var_6 = 11756706558016542814ULL;
unsigned char var_8 = (unsigned char)249;
int zero = 0;
unsigned short var_11 = (unsigned short)47380;
_Bool var_12 = (_Bool)0;
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
