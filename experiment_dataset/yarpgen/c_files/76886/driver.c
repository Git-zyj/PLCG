#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4013132643U;
unsigned int var_1 = 1994483173U;
unsigned int var_4 = 2067359758U;
unsigned int var_5 = 1782334452U;
unsigned int var_6 = 2281760892U;
unsigned int var_8 = 80826693U;
unsigned int var_10 = 186391219U;
int zero = 0;
unsigned int var_11 = 256226825U;
unsigned int var_12 = 743935962U;
unsigned int var_13 = 1608532212U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
