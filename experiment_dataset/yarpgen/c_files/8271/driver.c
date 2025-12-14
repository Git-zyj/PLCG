#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-63;
unsigned char var_5 = (unsigned char)142;
_Bool var_8 = (_Bool)0;
short var_14 = (short)13467;
int zero = 0;
short var_15 = (short)-8277;
short var_16 = (short)25549;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
