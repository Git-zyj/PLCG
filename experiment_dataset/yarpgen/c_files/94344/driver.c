#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)12374;
unsigned char var_12 = (unsigned char)41;
short var_15 = (short)31315;
int zero = 0;
short var_16 = (short)-11261;
unsigned long long int var_17 = 15055159796049539362ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
