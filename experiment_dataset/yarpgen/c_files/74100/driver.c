#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)40;
signed char var_4 = (signed char)62;
signed char var_6 = (signed char)78;
unsigned short var_9 = (unsigned short)46984;
signed char var_10 = (signed char)-4;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned short var_14 = (unsigned short)19169;
short var_15 = (short)-21236;
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
