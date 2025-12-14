#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2371463900796111998ULL;
short var_2 = (short)23749;
short var_4 = (short)24470;
int var_6 = 198559779;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 2857193974U;
short var_16 = (short)12732;
int zero = 0;
unsigned char var_19 = (unsigned char)224;
int var_20 = -1825961099;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
